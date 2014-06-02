#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCBundle.h>
#include <OSCBoards.h>
EthernetUDP Udp;
IPAddress ip(192, 168, 0, 111);
IPAddress OutIp(192, 168, 0, 4);
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;
byte mac[] = {
  0x90, 0xA2, 0xDA, 0x0D, 0x94, 0x73};
OSCBundle bundleOUT;
uint8_t ViscaShortMsg[5] = {
  0x81, 0x01, 0x06, 0x04, 0xFF};
uint8_t ViscaMsg[6] = {
  0x81, 0x01, 0x04, 0x00, 0x00, 0xFF};
uint8_t ViscaLongMsg[9] = {
  0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0x00, 0x00, 0xFF};
uint8_t ViscaMemMsg[7] = {
  0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0xFF};
char answer[1024];   // for incoming serial data
int value;


/* **************************************************************** */
/* ************************SET*UP********************************** */
/* **************************************************************** */
void setup() {
  /* ************ Launch ethernet server  *************************** */
  Ethernet.begin(mac,ip);
  Udp.begin(inPort);
  /******** Launch Serial Communication for visca commands **********/
  Serial.begin(9600);
}


/* **************************************************************** */
/* ************************THE****LOOP***************************** */
/* **************************************************************** */
void loop(){ 
  /* **************************************************************** */
  /* ************ // UDP MESSAGES COMING OVER OSC**** *************** */
  /* **************************************************************** */
  OSCMessage MessageIN;
  int size;
  if( (size = Udp.parsePacket())>0)
  {
    while(size--)
      MessageIN.fill(Udp.read());
    if(!MessageIN.hasError()) {
      MessageIN.route("/zoom", zoom);
      MessageIN.route("/power", power);
      MessageIN.route("/focus", focus);
      MessageIN.route("/pos", pos);
      MessageIN.route("/ir", IR);
    }
  }        
  /* **************************************************************** */
  /* ***************Check Serial FEEDBACK FROM CAMERA***************** */
  /* **************************************************************** */
  if (Serial.available() > 3) {
    int bytesRead;
    bytesRead = Serial.readBytesUntil(255,answer,1024);
//    bundleOUT.add("/visca").add(answer); 
//    sendOSC();
  }
}


/* **************************************************************** */
/* ************************SEND****OSC***************************** */
/* **************************************************************** */
void sendOSC(){ 
  Udp.beginPacket(OutIp, outPort); 
  bundleOUT.send(Udp);
  Udp.endPacket();
  bundleOUT.empty();
}



/* **************************************************************** */
/* ************************POWER*********************************** */
/* **************************************************************** */
void power(OSCMessage &msg, int addrOffset ){
  if (msg.isInt(0)){        
    value = msg.getInt(0);
  } 
  else if(msg.isFloat(0)){
    value = msg.getFloat(0);
  }
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else {
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}

/* **************************************************************** */
/* ************************POSITION******************************** */
/* **************************************************************** */
void pos(OSCMessage &msg, int addrOffset ){
  int Matched;
  ViscaLongMsg[2] =  0x06;
  ViscaLongMsg[3] =  0x01;
  ViscaLongMsg[4] =  0x05;
  ViscaLongMsg[5] =  0x05;
  Matched = msg.match("/stop", addrOffset);
  if(Matched == 5){   
    ViscaLongMsg[6] =  0x03;
    ViscaLongMsg[7] =  0x03;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/up", addrOffset);
  if(Matched == 3){   
    ViscaLongMsg[6] =  0x03;
    ViscaLongMsg[7] =  0x01;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/down", addrOffset);
  if(Matched == 5){   
    ViscaLongMsg[6] =  0x03;
    ViscaLongMsg[7] =  0x02;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/left", addrOffset);
  if(Matched == 5){   
    ViscaLongMsg[6] =  0x01;
    ViscaLongMsg[7] =  0x03;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/right", addrOffset);
  if(Matched == 6){   
    ViscaLongMsg[6] =  0x02;
    ViscaLongMsg[7] =  0x03;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/upleft", addrOffset);
  if(Matched == 7){   
    ViscaLongMsg[6] =  0x01;
    ViscaLongMsg[7] =  0x01;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/upright", addrOffset);
  if(Matched == 8){   
    ViscaLongMsg[6] =  0x02;
    ViscaLongMsg[7] =  0x01;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/downleft", addrOffset);
  if(Matched == 9){   
    ViscaLongMsg[6] =  0x01;
    ViscaLongMsg[7] =  0x02;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/downright", addrOffset);
  if(Matched == 10){   
    ViscaLongMsg[6] =  0x02;
    ViscaLongMsg[7] =  0x02;
    Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
  }
  Matched = msg.match("/home", addrOffset);
  if(Matched == 5){   
    ViscaShortMsg[3] =  0x04;
    Serial.write( ViscaShortMsg, sizeof(ViscaShortMsg) );
  }
  Matched = msg.match("/reset", addrOffset);
  if(Matched == 6){   
    ViscaShortMsg[3] =  0x05;
    Serial.write( ViscaShortMsg, sizeof(ViscaShortMsg) );
  }
}

/* **************************************************************** */
/* ************************INFRA-RED******************************* */
/* **************************************************************** */
void IR(OSCMessage &msg, int addrOffset ){
  int Matched;
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
  Matched = msg.match("/active", addrOffset);
  if(Matched == 7){  
    ViscaMsg[3] =  0x01;
    if(msg.isInt(0)){
      value = msg.getInt(0); 
    }
    if ( value == 1 ) {
      ViscaMsg[4] =  0x02;
    } 
    else { 
      ViscaMsg[4] =  0x03;
    } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) ); 
  }
  Matched = msg.match("/focuscorrection", addrOffset);
  if(Matched == 16){  
    ViscaMsg[3] =  0x11;
    if(msg.isInt(0)){
      value = msg.getInt(0); 
    }
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
/* ************************ZOOM************************************ */
/* **************************************************************** */
void zoom(OSCMessage &msg, int addrOffset ){
  int Matched;
  ViscaMsg[1] =  0x01;
  ViscaMsg[2] =  0x04;
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
    if(msg.isInt(0)){
      value = msg.getInt(0);
      if (value >= 0 && value <= 7) {
        ViscaMsg[4] =  0x30 | value;
      }
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }
  /* ************ ZOOM VARIABLE TELE ************************************ */
  Matched = msg.match("/variable/tele", addrOffset);
  if(Matched == 14){   
    if(msg.isInt(0)){
      value = msg.getInt(0);
      if (value >= 0 && value <= 7) {
        ViscaMsg[4] =  0x20 | value;
      }
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }
  /* ************ Zoom Direct ************************************ */
  Matched = msg.match("/direct", addrOffset);
  if(Matched == 7){   
    ViscaLongMsg[2] =  0x04;
    int value  = msg.getInt(0);
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



/* **************************************************************** */
/* ************************FOCUS*********************************** */
/* **************************************************************** */
void focus(OSCMessage &msg, int addrOffset ){
  int Matched;
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
    if(msg.isString(0)){
      ViscaMsg[3] =  0x08;
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
    if(msg.isInt(0)){
      ViscaMsg[3] =  0x08;
      value = msg.getInt(0);
      if (value >= 0 && value <= 7) {
        ViscaMsg[4] =  0x20 | value;
      }
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }
  /* ************ Focus Variable Far ************************************* */
  Matched = msg.match("/variable/far", addrOffset);
  if(Matched == 13){   
    if(msg.isInt(0)){
      ViscaMsg[3] =  0x08;
      value = msg.getInt(0);
      if (value >= 0 && value <= 7) {
        ViscaMsg[4] =  0x30 | value;
      }
      Serial.write( ViscaMsg, sizeof(ViscaMsg) );
    }
  }

  /* ************ Focus Direct ************************************ */
  Matched = msg.match("/direct", addrOffset);
  if(Matched == 7){   
    ViscaLongMsg[2] =  0x04;
    int value  = msg.getInt(0);
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
    if(msg.isString(0)){
      ViscaMsg[3] =  0x38;
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
    int value  = msg.getInt(0);  
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

