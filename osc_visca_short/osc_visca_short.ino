#include <Ethernet.h>
#include <SPI.h>
#include <ArdOSC.h>
/************* Variables ****************/
byte mac[] = { 
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
byte ip[] = { 
  10, 0, 0, 10 };
int serverPort = 10000;
OSCServer server;
EthernetClient client;
uint8_t ViscaMsg[6] = {  
  0x81, 0x01, 0x04, 0x00, 0x00, 0xFF      };
uint8_t ViscaLongMsg[9] = {  
  0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0x00, 0x00, 0xFF            };
void setup()
{ 
  /************* Launch Serial Communication for visca commands ****************/
  Serial.begin(9600);
  /************* Launch ethernet server  ****************/
  Ethernet.begin(mac, ip);
  server.begin(serverPort);  
  /************* Add some osc messages ****************/
  server.addCallback("/visca/AddressSet",&ViscaAddressSet);
  server.addCallback("/visca/ifclear",&ViscaIfClear);
  server.addCallback("/visca/cancel",&ViscaCancel);
  server.addCallback("/visca.1/sw",&ViscaSw);
  server.addCallback("/visca.1/zoom/stop",&ViscaZoomStop);
  server.addCallback("/visca.1/zoom/variable",&ViscaZoomVariable);
  server.addCallback("/visca.1/zoom",&ViscaZoom);
  server.addCallback("/visca.1/whitebalance",&ViscaWB);
/*  server.addCallback("/visca.1/zoom/digital/sw",&ViscaZoomDigitalSw);
  server.addCallback("/visca.1/focus/stop",&ViscaFocusStop);
  server.addCallback("/visca.1/focus",&ViscaFocus);
  server.addCallback("/visca.1/focus/mode",&ViscaFocusMode);
  server.addCallback("/visca.1/focus/nearlimit",&ViscaFocusNearLimit);
  server.addCallback("/visca.1/ir/correction",&ViscaIRCorrection);
  server.addCallback("/visca.1/init",&ViscaInit);
  server.addCallback("/visca.1/gain/red",&ViscaRedGain);
  server.addCallback("/visca.1/gain/blue",&ViscaBlueGain);
  server.addCallback("/visca.1/slowshutter",&ViscaSlowShutter);
  server.addCallback("/visca.1/ir",&ViscaIR);
  server.addCallback("/visca.1/backlight",&ViscaBackLight);
  server.addCallback("/visca.1/reverse",&ViscaReverse);
  server.addCallback("/visca.1/flip",&ViscaFlip);
  server.addCallback("/visca.1/fx",&ViscaFX);
  server.addCallback("/visca.1/freeze",&ViscaFreeze);
  server.addCallback("/visca.1/mode",&ViscaExposure);
  server.addCallback("/visca.1/shutter",&ViscaShutter);
  server.addCallback("/visca.1/iris",&ViscaIris);
  server.addCallback("/visca.1/gain",&ViscaGain);
  server.addCallback("/visca.1/stabilize",&ViscaStab);
  server.addCallback("/visca.1/highsensitivity",&ViscaHS);
  server.addCallback("/visca.1/highresolution",&ViscaHR);
  server.addCallback("/visca.1/gamma",&ViscaGamma);
  server.addCallback("/visca.1/aperture",&ViscaAperture);
  server.addCallback("/visca.1/widedynamic",&ViscaWD);
  server.addCallback("/visca.1/memory/reset",&ViscaMemReset);
  server.addCallback("/visca.1/memory/set",&ViscaMemSet);
  server.addCallback("/visca.1/memory/recall",&ViscaMemRecall);
  server.addCallback("/visca.1/chromasupress",&ViscaChromaSuppress); */
}
void loop()
{ 
  /************* // Check OSC messages ****************/
  int result = server.aviableCheck();
  if(result>0){
  }
}
/************* ViscaAddressSet ****************/
void ViscaAddressSet(OSCMessage *_mes) {
  Serial.write(0x88);
  Serial.write(0x30);
  Serial.write(0x01);
  Serial.write(0xFF); 
}
/************* IfClear ****************/
void ViscaIfClear(OSCMessage *_mes) {
  Serial.write(0x88);
  Serial.write(0x01);
  Serial.write((uint8_t) 0);
  Serial.write(0x01);
  Serial.write(0xFF); 
}
/************* Cancel ****************/
void ViscaCancel(OSCMessage *_mes) {
  /* Buffer 1 */
  Serial.write(0x81);
  Serial.write(0x21);
  Serial.write(0xFF); 
  /* Buffer 2 */
  delay(200);
  Serial.write(0x81);
  Serial.write(0x22);
  Serial.write(0xFF); 
}
/************* Power ****************/
void ViscaSw(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
    ViscaMsg[3] =  0x00;
    ViscaMsg[4] =  0x02;
  } 
  else {
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Zoom Stop ****************/
void ViscaZoomStop(OSCMessage *_mes) {
  ViscaMsg[3] =  0x07;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );

}
/************* Zoom Variable ****************/
void ViscaZoomVariable(OSCMessage *_mes) {
  ViscaMsg[3] =  0x07;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  int value2 = _mes->getArgInt32(1);
  _mes->getArgString(0,value);
  if (value == "tele"|| (value2 == 0)) {
      ViscaMsg[4] =  0x20;
    }
      if (value == "tele"|| (value2 == 1)) {
      ViscaMsg[4] =  0x21;
    }
  if (value == "wide") {
    if (value2 == 0) {
      ViscaMsg[4] =  0x30;
    }
    if (value2 == 1) {
      ViscaMsg[4] =  0x31;
    }
    if (value2 == 2) {
      ViscaMsg[4] =  0x32;
    }
    if (value2 == 3) {
      ViscaMsg[4] =  0x33;
    }
    if (value2 == 4) {
      ViscaMsg[4] =  0x34;
    }
    if (value2 == 5) {
      ViscaMsg[4] =  0x35;
    }
    if (value2 == 6) {
      ViscaMsg[4] =  0x35;
    }
    if (value2 == 7) {
      ViscaMsg[4] =  0x37;
    }
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Zoom Direct ****************/
void ViscaZoom(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16 ; 
  int valuebd = value >> 4; 
  int valuecd = value >> 8; 
  int valuedd = value >> 12; 
  int valueb = valuebd % 16; 
  int valuec = valuecd % 16; 
  int valued = valuedd % 16;   
  ViscaLongMsg[4] =  valued;
  ViscaLongMsg[5] =  valuec;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* White Balance ****************/
void ViscaWB(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);  
  if ( value == "auto" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x0D;
  }
  if ( value == "indoor" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x01;
  }
  if ( value == "outdoor" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x02;
  }
  if ( value == "one push" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x03;
  }
  if ( value == "ATW" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x04;
  }
  if ( value == "manual" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x0D;
  }
  if ( value == "one push trigger" ) {
    ViscaMsg[3] =  0x10;
    ViscaMsg[4] =  0x05;
  }
  if ( value == "outdoor auto" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x06;
  }
  if ( value == "sodium lamp auto" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x07;
  }
  if ( value == "sodium lamp" ) {
    ViscaMsg[3] =  0x35;
    ViscaMsg[4] =  0x08;
  }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
