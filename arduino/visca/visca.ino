#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCMessage.h>
#include <OSCBundle.h>
#include <OSCBoards.h>
EthernetUDP Udp;
IPAddress ip(10, 0, 0, 111);
IPAddress OutIp(10, 0, 0, 4);
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;
byte mac[] = {
  0x90, 0xA2, 0xDA, 0x0D, 0x94, 0x73};
OSCBundle MessageOUT;
uint8_t CancelMsg[3] = {
  0x81, 0x21, 0xFF}; 
uint8_t SetAddressMsg[4] = {
  0x88, 0x30, 0x01, 0xFF}; 
uint8_t IfClearMsg[5] = {
  0x81, 0x01, 0x06, 0x04, 0xFF};
uint8_t ViscaShortMsg[5] = {
  0x81, 0x01, 0x06, 0x04, 0xFF};
uint8_t ViscaMsg[6] = {
  0x81, 0x01, 0x04, 0x00, 0x00, 0xFF};
uint8_t ViscaSignalMsg[7] = {
  0x81, 0x01, 0x06, 0x35, 0x00, 0x09, 0xFF};
uint8_t ViscaMemMsg[7] = {
  0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0xFF};
uint8_t ViscaLongMsg[9] = {
  0x81, 0x01, 0x04, 0x47, 0x05, 0x05, 0x00, 0x00, 0xFF};
uint8_t ViscaZoomFocusMsg[13] = {
  0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0xFF};
byte answer[1024];   // for incoming serial data
int value;
int Matched;

/* **************************************************************** */
/* ************************ SET UP ******************************** */
/* **************************************************************** */
void setup() {
  /* ************ Launch ethernet server  *************************** */
  Ethernet.begin(mac,ip);
  Udp.begin(inPort);
  /********** Launch Serial Communication for visca commands ******** */
  Serial.begin(9600);
}


/* **************************************************************** */
/* *********************** THE LOOP ******************************* */
/* **************************************************************** */
void loop(){ 
  /* **************************************************************** */
  /* *************** UDP MESSAGES COMING OVER OSC******************** */
  /* **************************************************************** */
  OSCMessage MessageIN;
  int size;
  if( (size = Udp.parsePacket())>0)
  {
    while(size--)
      MessageIN.fill(Udp.read());
    if(!MessageIN.hasError()) {
      MessageIN.route("/zoom", zoom);
      MessageIN.route("/active", power);
      MessageIN.route("/setaddress", setaddress);
      MessageIN.route("/ifclear", ifclear);
      MessageIN.route("/cancel", cancel);
      MessageIN.route("/focus", focus);
      MessageIN.route("/pos", pos);
      MessageIN.route("/ir", ir);
      MessageIN.route("/mode", mode);
      MessageIN.route("/shutter", shutter);
      MessageIN.route("/iris", iris);
      MessageIN.route("/gain", gain);
      MessageIN.route("/wb", wb);
      MessageIN.route("/fx", fx);
      MessageIN.route("/memory", memory);
      MessageIN.route("/chromasupress", chromasupress);
      MessageIN.route("/slowshutter", slowshutter);
      MessageIN.route("/reverse", reverse);
      MessageIN.route("/freeze", freeze);
      MessageIN.route("/flip", flip);
      MessageIN.route("/stabilizer", stabilizer);
      MessageIN.route("/wd", wd);
      MessageIN.route("/aperture", aperture);
      MessageIN.route("/nr", nr);
      MessageIN.route("/hr", hr);
      MessageIN.route("/gamma", gamma);
      MessageIN.route("/hs", hs);
      MessageIN.route("/compensation", AEcompensation);
      MessageIN.route("/backlight", backlight);
      MessageIN.route("/red", red);
      MessageIN.route("/blue", blue);
      MessageIN.route("/color", red);
      MessageIN.route("/hue", blue);
      MessageIN.route("/signal", signal);
      MessageIN.route("/receiveIR", receiveIR);
      MessageIN.route("/display", ViscaDisplay);
    }
  }        
  /* **************************************************************** */
  /* ************** CHECK SERIAL FEEDBACK FROM CAMERA *************** */
  /* **************************************************************** */
  //  if (Serial.available() > 0) {
  //    int bytesRead;
  //    bytesRead = Serial.readBytesUntil(255,(char *)answer,1024);
  //    if (!bytesRead == 0) {
  //        MessageOUT.add("/visca").add(answer);     
  //       sendOSC();
  //    }
  //  }
}


/* **************************************************************** */
/* *********************** SEND OSC ******************************* */
/* **************************************************************** */
void sendOSC(){ 
  Udp.beginPacket(OutIp, outPort); 
  MessageOUT.send(Udp);
  Udp.endPacket();
  MessageOUT.empty();
}


/* **************************************************************** */
/* ******************* GETVALUE (FLOAT OR INT ********************* */
/* **************************************************************** */
void getValue(OSCMessage &msg, int addrOffset){ 
  if (msg.isInt(0)){      
    value = msg.getInt(0);
  } 
  else if(msg.isFloat(0)){
    value = msg.getFloat(0);
  }
}


/* **************************************************************** */
/* ************************POWER*********************************** */
/* **************************************************************** */
void power(OSCMessage &msg, int addrOffset ){
  getValue (msg, 0);
  ViscaMsg[0] =  0x81;
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x00;  
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else {
    ViscaMsg[4] =  0x03;
  } 
  MessageOUT.add("/feedback").add(value);     
  sendOSC();
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ************************ SET ADDRESS *************************** */
/* **************************************************************** */
void setaddress(OSCMessage &msg, int addrOffset ){
  Serial.write( SetAddressMsg, sizeof(SetAddressMsg) );
}


/* **************************************************************** */
/* ************************ IF CLEAR ****************************** */
/* **************************************************************** */
void ifclear(OSCMessage &msg, int addrOffset ){
  Serial.write( IfClearMsg, sizeof(IfClearMsg) );
}


/* **************************************************************** */
/* ****************************** CANCEL ************************** */
/* **************************************************************** */
void cancel(OSCMessage &msg, int addrOffset ){
  getValue (msg, 0);
  ViscaMsg[1] =  20 | value;
  Serial.write( CancelMsg, sizeof(CancelMsg) );
}


/* **************************************************************** */
/* ************************ Slow Shutter ************************** */
/* **************************************************************** */
void slowshutter(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x5A;
  if(msg.isString(0)){
    int length=msg.getDataLength(0);
    char str[length];
    value = msg.getString(0,str,length);
    if ((strcmp("auto", str)==0)) {
      ViscaMsg[4] =  0x02;
    } 
    if ((strcmp("manual", str)==0)) {
      ViscaMsg[4] =  0x03;
    } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}  


/* **************************************************************** */
/* *********************** POSITION ******************************* */
/* **************************************************************** */
void pos(OSCMessage &msg, int addrOffset ){
  Matched = msg.match("/speed", addrOffset);
  if(Matched == 6){  
    getValue (msg, 0);
    ViscaLongMsg[4] =  value;
    ViscaLongMsg[5] =  value;    
  }
  ViscaLongMsg[2] =  0x06;
  ViscaLongMsg[3] =  0x01;
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x06;
  if(msg.isString(0)){
    int length=msg.getDataLength(0);
    char str[length];
    value = msg.getString(0,str,length);
    if ((strcmp("stop", str)==0)) {
      ViscaLongMsg[6] =  0x03;
      ViscaLongMsg[7] =  0x03;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("up", str)==0)) {
      ViscaLongMsg[6] =  0x03;
      ViscaLongMsg[7] =  0x01;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("down", str)==0)) {
      ViscaLongMsg[6] =  0x03;
      ViscaLongMsg[7] =  0x02;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("left", str)==0)) {
      ViscaLongMsg[6] =  0x01;
      ViscaLongMsg[7] =  0x03;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("right", str)==0)) {
      ViscaLongMsg[6] =  0x02;
      ViscaLongMsg[7] =  0x03;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("upleft", str)==0)) {
      ViscaLongMsg[6] =  0x01;
      ViscaLongMsg[7] =  0x01;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("upright", str)==0)) {
      ViscaLongMsg[6] =  0x02;
      ViscaLongMsg[7] =  0x01;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("downleft", str)==0)) {
      ViscaLongMsg[6] =  0x01;
      ViscaLongMsg[7] =  0x02;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("downright", str)==0)) {
      ViscaLongMsg[6] =  0x02;
      ViscaLongMsg[7] =  0x02;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
    if ((strcmp("home", str)==0)) {
      ViscaShortMsg[3] =  0x04;
      Serial.write( ViscaShortMsg, sizeof(ViscaShortMsg) );
    }
    if ((strcmp("reset", str)==0)) {
      ViscaShortMsg[3] =  0x05;
      Serial.write( ViscaShortMsg, sizeof(ViscaShortMsg) );
    }
  }
}


/* **************************************************************** */
/* ************************INFRA-RED******************************* */
/* **************************************************************** */
void ir(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  Matched = msg.match("/active", addrOffset);
  if(Matched == 7){  
    ViscaMsg[3] =  0x01;
    getValue (msg, 0);
    if ( value == 1 ) {
      ViscaMsg[4] =  0x02;
    } 
    else { 
      ViscaMsg[4] =  0x03;
    } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) ); 
  }
  Matched = msg.match("/correction", addrOffset);
  if(Matched == 16){  
    ViscaMsg[3] =  0x11;
    getValue (msg, 0);
    if ( value == 1 ) {
      ViscaMsg[4] =  0x01;
    } 
    else { 
      ViscaMsg[4] =  0x00;
    } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) ); 
  }
}


/* **************************************************************** */
/* *********************** ZOOM *********************************** */
/* **************************************************************** */
void zoom(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x06;
  /* ************************ DIGITAL ******************************* */
  Matched = msg.match("/digital", addrOffset);
  if(Matched == 8){   
    if ( value == 1 ) {
      ViscaMsg[4] =  0x02;
    } 
    else {
      ViscaMsg[4] =  0x03;
    } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );    
  }
  else {
    ViscaMsg[3] =  0x07;
    /* ************************ ZOOM STOP ***************************** */
    Matched = msg.match("/stop", addrOffset);
    if(Matched == 5){   
      ViscaMsg[4] = ((uint8_t) 0);
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );    
    }
    /* ************ ZOOM STANDARD ************************************* */
    Matched = msg.match("/standard", addrOffset);
    if(Matched == 9){   
      if(msg.isString(0)){
        int length=msg.getDataLength(0);
        char str[length];
        value = msg.getString(0,str,length);
        if ((strcmp("tele", str)==0)) {
          ViscaMsg[4] =  0x02;
        } 
        if ((strcmp("wide", str)==0)) {
          ViscaMsg[4] =  0x03;
        } 
        Serial.write( ViscaMsg, sizeof(ViscaMsg) );
      }

    }
    /* ************ ZOOM VARIABLE WIDE ************************************ */
    Matched = msg.match("/variable/wide", addrOffset);
    if(Matched == 14){   
      getValue (msg, 0);
      if (value >= 0 && value <= 7) {
        ViscaMsg[4] =  0x30 | value;
      }
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
    /* ************ ZOOM VARIABLE TELE ************************************ */
    Matched = msg.match("/variable/tele", addrOffset);
    if(Matched == 14){   
      getValue (msg, 0);
      if (value >= 0 && value <= 7) {
        ViscaMsg[4] =  0x20 | value;
      }
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
    /* ************ Zoom Direct ************************************ */
    Matched = msg.match("/direct", addrOffset);
    if(Matched == 7){   
      ViscaLongMsg[2] =  0x04;
      getValue (msg, 0);
      int valuea = value & 15; 
      int valuebZ = value >> 4; 
      int valuecZ = value >> 8; 
      int valuedZ = value >> 12; 
      int valueb = valuebZ & 15  ; 
      int valuec = valuecZ & 15 ; 
      int valued = valuedZ & 15 ; 
      ViscaLongMsg[3] =  0x47;
      ViscaLongMsg[4] =  valued;
      ViscaLongMsg[5] =  valuec;
      ViscaLongMsg[6] =  valueb;
      ViscaLongMsg[7] =  valuea;
      Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
    }
  }
}


/* **************************************************************** */
/* ************************ FOCUS ********************************* */
/* **************************************************************** */
void focus(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  /* ************ Focus Stop *********************************** */
  Matched = msg.match("/stop", addrOffset);
  if(Matched == 5){   
    ViscaMsg[3] =  0x08;  
    ViscaMsg[4] =  0x00;
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }       
  /* ************ Focus Standard ************************************ */
  Matched = msg.match("/standard", addrOffset);
  if(Matched == 9){   
    ViscaMsg[3] =  0x08;  
    if(msg.isString(0)){
      int length=msg.getDataLength(0);
      char str[length];
      value = msg.getString(0,str,length);
      if ((strcmp("far", str)==0)) {
        ViscaMsg[4] =  0x02;
      } 
      if ((strcmp("near", str)==0)) {
        ViscaMsg[4] =  0x03;
      } 
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }   
  /* ************ Focus Variable Near ************************************ */
  Matched = msg.match("/variable/near", addrOffset);
  if(Matched == 14){   
    ViscaMsg[3] =  0x08;  
    getValue (msg, 0);
    if (value >= 0 && value <= 7) {
      ViscaMsg[4] =  0x20 | value;
    }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
  /* ************ Focus Variable Far ************************************* */
  Matched = msg.match("/variable/far", addrOffset);
  if(Matched == 13){ 
    ViscaMsg[3] =  0x08;  
    getValue (msg, 0);
    if (value >= 0 && value <= 7) {
      ViscaMsg[4] =  0x30 | value;
    }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }

  /* ************ Focus Direct ************************************ */
  Matched = msg.match("/direct", addrOffset);
  if(Matched == 7){   
    ViscaLongMsg[2] =  0x04;
    getValue (msg, 0);
    int valuea = value & 15; 
    int valuebZ = value >> 4; 
    int valuecZ = value >> 8; 
    int valuedZ = value >> 12; 
    int valueb = valuebZ & 15  ; 
    int valuec = valuecZ & 15 ; 
    int valued = valuedZ & 15 ; 
    ViscaLongMsg[3] =  0x48;
    ViscaLongMsg[4] =  valued;
    ViscaLongMsg[5] =  valuec;
    ViscaLongMsg[6] =  valueb;
    ViscaLongMsg[7] =  valuea;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  /* ************ Focus Auto ************************************ */
  Matched = msg.match("/mode", addrOffset);
  if(Matched == 5){   
    ViscaMsg[3] =  0x38;
    if(msg.isString(0)){
      int length=msg.getDataLength(0);
      char str[length];
      value = msg.getString(0,str,length);
      if ((strcmp("auto", str)==0)) {
        ViscaMsg[4] =  0x02;
      } 
      if ((strcmp("manual", str)==0)) {
        ViscaMsg[4] =  0x03;
      } 
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }   
  /* ************ Focus Trigger ************************************ */
  Matched = msg.match("/auto/trigger", addrOffset);
  if(Matched == 13){  
    ViscaMsg[3] =  0x18;
    ViscaMsg[4] =  0x01;
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
  /* ************ Focus Infinity ************************************ */
  Matched = msg.match("/infinity", addrOffset);
  if(Matched == 9){  
    ViscaMsg[3] =  0x18;
    ViscaMsg[4] =  0x02;
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
  /* ************ Focus Near Limit ************************************* */
  Matched = msg.match("/nearlimit", addrOffset);
  if(Matched == 10){   
    ViscaLongMsg[2] =  0x04;
    getValue (msg, 0);
    int valuea = value & 15; 
    int valuebZ = value >> 4; 
    int valuecZ = value >> 8; 
    int valuedZ = value >> 12; 
    int valueb = valuebZ & 15  ; 
    int valuec = valuecZ & 15 ; 
    int valued = valuedZ & 15 ; 
    ViscaLongMsg[3] =  0x28;
    ViscaLongMsg[4] =  valued;
    ViscaLongMsg[5] =  valuec;
    ViscaLongMsg[6] =  valueb;
    ViscaLongMsg[7] =  valuea;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  /* ************ Focus Sensitivity ************************************ */
  Matched = msg.match("/auto/sensitvity", addrOffset);
  if(Matched == 16){ 
    ViscaMsg[3] =  0x58;
    if(msg.isString(0)){
      ViscaMsg[3] =  0x38;
      int length=msg.getDataLength(0);
      char str[length];
      value = msg.getString(0,str,length);
      if ((strcmp("normal", str)==0)) {
        ViscaMsg[4] =  0x02;
      } 
      if ((strcmp("low", str)==0)) {
        ViscaMsg[4] =  0x03;
      } 
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }
  /* ************ Focus Auto Mode ************************************ */
  Matched = msg.match("/auto/mode", addrOffset);
  if(Matched == 10){   
    ViscaMsg[3] =  0x57;
    if(msg.isString(0)){
      ViscaMsg[3] =  0x38;
      int length=msg.getDataLength(0);
      char str[length];
      value = msg.getString(0,str,length);
      if ((strcmp("normal", str)==0)) {
        ViscaMsg[4] =  0x00;
      } 
      if ((strcmp("interval", str)==0)) {
        ViscaMsg[4] =  0x01;
      } 
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }
  /* *********** Focus Zoom Trigger ************************************ */
  Matched = msg.match("/auto/zoomtrigger", addrOffset);
  if(Matched == 17){  
    ViscaMsg[3] =  0x57;
    ViscaMsg[4] =  0x02;
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}


/* **************************************************************** */
/* **************** MODE : AUTO EXPOSURE / AE ********************* */
/* **************************************************************** */
void mode(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x39;
  /* *********************** AE Exposure Mode *********************** */
  if(msg.isString(0)){
    int length=msg.getDataLength(0);
    char str[length];
    value = msg.getString(0,str,length);
    if ((strcmp("auto", str)==0)) {
      ViscaMsg[4] =  0x00;
    }
    if ((strcmp("manual", str)==0)) {
      ViscaMsg[4] =  0x03;
    }
    if ((strcmp("shutter", str)==0)) {
      ViscaMsg[4] =  0x0A;
    }
    if ((strcmp("iris", str)==0)) {
      ViscaMsg[4] =  0x0B;
    }
    if ((strcmp("bright", str)==0)) {
      ViscaMsg[4] =  0x0D;
    }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}


/* **************************************************************** */
/* **************** SHUTTER IRIS GAIN ***************************** */
/* **************************************************************** */
void shutter(OSCMessage &msg, int addrOffset ){
  ViscaLongMsg[1] =  0x01;
  ViscaLongMsg[2] =  0x04;
  ViscaLongMsg[3] =  0x4A;
  getValue (msg, 0);
  int valuea = value & 15; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ & 15  ; 
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
void iris(OSCMessage &msg, int addrOffset ){
  ViscaLongMsg[1] =  0x01;
  ViscaLongMsg[2] =  0x04;
  ViscaLongMsg[3] =  0x4B;
  getValue (msg, 0);
  int valuea = value & 15; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ & 15  ; 
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
void gain(OSCMessage &msg, int addrOffset ){
  ViscaLongMsg[1] =  0x01;
  ViscaLongMsg[2] =  0x04;
  ViscaLongMsg[3] =  0x4C;
  getValue (msg, 0);
  int valuea = value & 15; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ & 15  ; 
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}


/* **************************************************************** */
/* ******************** WHITE BALANCE ***************************** */
/* **************************************************************** */
void wb(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x35;
  Matched = msg.match("/trigger", addrOffset);
  if(Matched == 8){ 
    ViscaMsg[3] =  0x10;
    ViscaMsg[4] =  0x05;
  }
  else {
    if(msg.isString(0)){
      int length=msg.getDataLength(0);
      char str[length];
      value = msg.getString(0,str,length);
      if ((strcmp("auto", str)==0)) {
        ViscaMsg[4] =  0x00;
      }
      if ((strcmp("indoor", str)==0)) {
        ViscaMsg[4] =  0x01;
      }
      if ((strcmp("outdoor", str)==0)) {
        ViscaMsg[4] =  0x02;
      }
      if ((strcmp("one push", str)==0)) {
        ViscaMsg[4] =  0x03;
      }
      if ((strcmp("ATW", str)==0)) {
        ViscaMsg[4] =  0x04;
      }
      if ((strcmp("manual", str)==0)) {
        ViscaMsg[4] =  0x05;
      }
      if ((strcmp("outdoor auto", str)==0)) {
        ViscaMsg[4] =  0x06;
      }
      if ((strcmp("sodium lamp auto", str)==0)) {
        ViscaMsg[4] =  0x07;
      }
      if ((strcmp("sodium lamp", str)==0)) {
        ViscaMsg[4] =  0x08;
      }
    }
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* **************** IMAGE EFFECTS FX ****************************** */
/* **************************************************************** */
void fx(OSCMessage &msg, int addrOffset ){
  ViscaMsg[3] =  0x63;
  if(msg.isString(0)){
    int length=msg.getDataLength(0);
    char str[length];
    value = msg.getString(0,str,length);
    if ((strcmp("off", str)==0)) {  
      ViscaMsg[4] = ((uint8_t) 0);
    } 
    if ((strcmp("neg art", str)==0)) {  
      ViscaMsg[4] = (0x02);
    } 
    if ((strcmp("bw", str)==0)) {  
      ViscaMsg[4] = (0x04);
    }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  } 
}


/* **************************************************************** */
/* **************** MEMORY SET/RECALL/RESET *********************** */
/* **************************************************************** */
void memory(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x3F;
  getValue(msg,0);
  Matched = msg.match("/reset", addrOffset);
  if(Matched == 7){ 
    ViscaMsg[4] = (uint8_t) 0x00;
    ViscaMemMsg[5] =  value;
    Serial.write( ViscaMemMsg, sizeof(ViscaMemMsg) );
  }
  Matched = msg.match("/set", addrOffset);
  if(Matched == 4){ 
    ViscaMsg[4] =  0x01;
    ViscaMemMsg[5] =  value;
    Serial.write( ViscaMemMsg, sizeof(ViscaMemMsg) );
  }
  Matched = msg.match("/recall", addrOffset);
  if(Matched == 7){ 
    ViscaMsg[4] =  0x02;
    ViscaMemMsg[5] =  value;
    Serial.write( ViscaMemMsg, sizeof(ViscaMemMsg) );
  }
}


/* **************************************************************** */
/* ************************ CHROMA SUPRESS ************************ */
/* **************************************************************** */
void chromasupress(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x5F;
  if(msg.isString(0)){
    int length=msg.getDataLength(0);
    char str[length];
    value = msg.getString(0,str,length);
    if ((strcmp("normal", str)==0)) {  
      ViscaMsg[4] = ((uint8_t) 0);
    }
    if ((strcmp("light", str)==0)) {  
      ViscaMsg[4] =  0x01;
    }
    if ((strcmp("medium", str)==0)) {  
      ViscaMsg[4] =  0x02;
    }
    if ((strcmp("hard", str)==0)) {  
      ViscaMsg[4] =  0x03;
    }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}


/* **************************************************************** */
/* **************** HORIZONTAL REVRERSESUPRESS ******************** */
/* **************************************************************** */
void reverse(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x61;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* **************************** FREEZE **************************** */
/* **************************************************************** */
void freeze(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x62;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* *********************** VERTICAL FLEEP ************************* */
/* **************************************************************** */
void flip(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x66;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ************************** STABILIZER  ************************* */
/* **************************************************************** */
void stabilizer(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x34;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ************************** Wide Dynamic  ************************* */
/* **************************************************************** */
void wd(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x3D;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ************************** APERTURE **************************** */
/* **************************************************************** */
void aperture(OSCMessage &msg, int addrOffset ){
  getValue(msg,0);
  int valuea = value & 15; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ & 15  ; 
  ViscaLongMsg[3] =  0x42;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}


/* **************************************************************** */
/* ******************** NOIS REDUCTION **************************** */
/* **************************************************************** */
void nr(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x53;
  getValue(msg,0);
  ViscaMsg[4] =  value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ******************** HIGH RESOLUTION *************************** */
/* **************************************************************** */
void hr(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x52;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ************************* GAMMA ******************************** */
/* **************************************************************** */
void gamma(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x5B;
  getValue(msg,0);
  ViscaMsg[4] =  value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ******************** HIGH SENSITIVITY ************************** */
/* **************************************************************** */
void hs(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x5E;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* ******************** EXPOSITION COMPENSATION ******************* */
/* **************************************************************** */
/* *************************** LEVEL ********************************/
void AEcompensation(OSCMessage &msg, int addrOffset ){
  Matched = msg.match("/level", addrOffset);
  if(Matched == 6){ 
    getValue(msg,0);
    int valuea = value & 15; 
    int valuebZ = value >> 4; 
    int valueb = valuebZ & 15  ; 
    ViscaLongMsg[3] =  0x4E;
    ViscaLongMsg[4] =  0x00;
    ViscaLongMsg[5] =  0x00;
    ViscaLongMsg[6] =  valueb;
    ViscaLongMsg[7] =  valuea;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  else {
    /* *************************** ACTIVE *******************************/
    ViscaMsg[1] =  0x01;
    ViscaMsg[2] =  0x04;
    ViscaMsg[3] =  0x3E;
    getValue(msg,0);
    if ( value == 1 ) {
      ViscaMsg[4] =  0x02;
    } 
    else { 
      ViscaMsg[4] =  0x03;
    } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}


/* **************************************************************** */
/* ************************** BACKLIGHT *************************** */
/* **************************************************************** */
void backlight(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  ViscaMsg[3] =  0x33;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* *********************** ZOOM / FOCUS *************************** */
/* **************************************************************** */
void zoomfocus(OSCMessage &msg, int addrOffset ){
  getValue(msg,0);
  int ZFZooma = value & 15 ; 
  int ZFZoomb = value >> 4 & 15  ; 
  int ZFZoomc = value >> 8 & 15 ; 
  int ZFZoomd = value >> 12 & 15 ; 
  getValue(msg,1);
  int ZFFocusa = value & 15 ; 
  int ZFFocusb = value >> 4 & 15  ; 
  int ZFFocusc = value >> 8 & 15 ; 
  int ZFFocusd = value >> 12 & 15 ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x47);
  Serial.write((byte)ZFZoomd);
  Serial.write((byte)ZFZoomc);
  Serial.write((byte)ZFZoomb);
  Serial.write((byte)ZFZooma);
  Serial.write((byte)ZFFocusd);
  Serial.write((byte)ZFFocusc);
  Serial.write((byte)ZFFocusb);
  Serial.write((byte)ZFFocusa);
  Serial.write((byte)0xFF);
}


/* **************************************************************** */
/* ************************* RED GAIN ***************************** */
/* **************************************************************** */
void red(OSCMessage &msg, int addrOffset ){
  ViscaLongMsg[1] =  0x01;
  ViscaLongMsg[2] =  0x04;
  ViscaLongMsg[3] =  0x43;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  getValue (msg, 0);
  int valuea = value & 15; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ & 15; 
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}


/* **************************************************************** */
/* ************************* BLUE GAIN **************************** */
/* **************************************************************** */
void blue(OSCMessage &msg, int addrOffset ){
  ViscaLongMsg[1] =  0x01;
  ViscaLongMsg[2] =  0x04;
  ViscaLongMsg[3] =  0x44;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  getValue (msg, 0);
  int valuea = value & 15; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ & 15; 
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}


/* **************************************************************** */
/* ************************* COLOR GAIN *************************** */
/* **************************************************************** */
void color(OSCMessage &msg, int addrOffset ){
  ViscaLongMsg[1] =  0x01;
  ViscaLongMsg[2] =  0x04;
  ViscaLongMsg[3] =  0x49;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  0x00;
  getValue (msg, 0);
  ViscaLongMsg[7] =  value;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}


/* **************************************************************** */
/* ************************* COLOR HUE **************************** */
/* **************************************************************** */
void hue(OSCMessage &msg, int addrOffset ){
  ViscaLongMsg[1] =  0x01;
  ViscaLongMsg[2] =  0x04;
  ViscaLongMsg[3] =  0x4F;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  0x00;
  getValue (msg, 0);
  ViscaLongMsg[7] =  value;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}


/* **************************************************************** */
/* ************************* VIDEO SYSTEM ************************* */
/* **************************************************************** */
void signal(OSCMessage &msg, int addrOffset ){
  getValue (msg, 0);
  ViscaSignalMsg[5] =  value;
  Serial.write( ViscaSignalMsg, sizeof(ViscaSignalMsg) );
}


/* **************************************************************** */
/* ************************* IR RECEIVE *************************** */
/* **************************************************************** */
void receiveIR(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x06;
  ViscaMsg[3] =  0x08;
  ViscaMsg[3] =  0x10;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}


/* **************************************************************** */
/* **************************** DISPLAY *************************** */
/* **************************************************************** */
void ViscaDisplay(OSCMessage &msg, int addrOffset ){
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x7E;
  ViscaMsg[3] =  0x01;
  ViscaMsg[3] =  0x18;
  getValue(msg,0);
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else { 
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}

