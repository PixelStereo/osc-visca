#include <Ethernet.h>
#include <SPI.h>
#include <ArdOSC.h>
/************* Variables ****************/
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
byte ip[] = { 10, 0, 0, 10 };
int serverPort = 10000;
OSCServer server;
EthernetClient client;

void setup()
{
/************* Launch ethernet server  ****************/
  Ethernet.begin(mac, ip);
  server.begin(serverPort);  
/************* Launch Serial Communication for visca commands ****************/
  Serial.begin(9600);
/************* Add some osc messages ****************/
  server.addCallback("/visca/AddressSet",&ViscaAddressSet);
  server.addCallback("/visca/ifclear",&ViscaIfClear);
  server.addCallback("/visca/cancel",&ViscaCancel);
  server.addCallback("/visca/zoom/stop",&ViscaZoomStop);
  server.addCallback("/visca/zoom/direct",&ViscaZoomStop);
  server.addCallback("/visca/zoom/variable",&ViscaZoomStop);
  server.addCallback("/visca/zoom",&ViscaZoomStop);
  server.addCallback("/visca.1/sw",&ViscaSw);
  server.addCallback("/visca.1/ir",&ViscaIR);
  server.addCallback("/visca.1/backlight",&ViscaBackLight);
  server.addCallback("/visca.1/reverse",&ViscaReverse);
  server.addCallback("/visca.1/flip",&ViscaFlip);
  server.addCallback("/visca.1/fx",&ViscaFX);
  server.addCallback("/visca.1/freeze",&ViscaFreeze);
  server.addCallback("/visca.1/whitebalance",&ViscaWB);
  server.addCallback("/visca.1/mode",&ViscaExposure);
  server.addCallback("/visca.1/gain",&ViscaGain);
  server.addCallback("/visca.1/shutter",&ViscaShutter);
  server.addCallback("/visca.1/iris",&ViscaIris);
  /* server.addCallback("/visca.1/zoom/digital/sw",&ViscaDigitalSw);
  server.addCallback("/visca.1/zoom/mode",&ViscaZoomMode);
  server.addCallback("/visca.1/focus/auto",&ViscaFocusAuto);
  server.addCallback("/visca.1/focus/value",&ViscaFocusValue);
  server.addCallback("/visca.1/focus/near",&ViscaFocusNear); */
}

void loop()
{ 
/************* // Check OSC messages ****************/
    if(server.aviableCheck()>0)
    {
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
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write((uint8_t) 0);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      else { 
          Serial.write(0x81);
          Serial.write(0x01);
          Serial.write(0x04);
          Serial.write((uint8_t) 0);
          Serial.write(0x03);
          Serial.write(0xFF);
          } 
}
/************* Zoom Stop ****************/
void ViscaZoomStop(OSCMessage *_mes) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x07);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
}
/************* Zoom Standard ****************/
void ViscaZoomStandard(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if (value == "tele") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x07);
           Serial.write(0x02);
           Serial.write(0xFF); 
  }
  if (value == "wide") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x07);
           Serial.write(0x03);
           Serial.write(0xFF); 
  }
}
/************* Zoom Variable ****************/
void ViscaVariable(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  int value2=_mes->getArgInt32(1);
  _mes->getArgString(0,value);
  if (value == "tele") {
          if (value2 == 0) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x20);
                 Serial.write(0xFF); 
          }
          if (value2 == 1) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x21);
                 Serial.write(0xFF); 
          }
          if (value2 == 2) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x22);
                 Serial.write(0xFF); 
          }
          if (value2 == 3) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x23);
                 Serial.write(0xFF); 
          }
          if (value2 == 4) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x24);
                 Serial.write(0xFF); 
          }
          if (value2 == 5) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x25);
                 Serial.write(0xFF); 
          }
          if (value2 == 6) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x26);
                 Serial.write(0xFF); 
          }
          if (value2 == 7) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x27);
                 Serial.write(0xFF); 
          }
  }
  if (value == "wide") {
     if (value2 == 0) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x30);
                 Serial.write(0xFF); 
          }
          if (value2 == 1) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x31);
                 Serial.write(0xFF); 
          }
          if (value2 == 2) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x32);
                 Serial.write(0xFF); 
          }
          if (value2 == 3) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x33);
                 Serial.write(0xFF); 
          }
          if (value2 == 4) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x34);
                 Serial.write(0xFF); 
          }
          if (value2 == 5) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x35);
                 Serial.write(0xFF); 
          }
          if (value2 == 6) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x36);
                 Serial.write(0xFF); 
          }
          if (value2 == 7) {
                 Serial.write(0x81);
                 Serial.write(0x01);
                 Serial.write(0x04);
                 Serial.write(0x07);
                 Serial.write(0x37);
                 Serial.write(0xFF); 
          }
  }
}
/************* Zoom Direct ****************/
void ViscaZoom(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
    /* for value 0-49535 */
}
/************* Infra-Red ****************/
void ViscaIR(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x01);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      else { 
          Serial.write(0x81);
          Serial.write(0x01);
          Serial.write(0x04);
          Serial.write(0x01);
          Serial.write(0x03);
          Serial.write(0xFF);
          } 
}

/************* Backlight ****************/
void ViscaBackLight(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x33);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      else { 
          Serial.write(0x81);
          Serial.write(0x01);
          Serial.write(0x04);
          Serial.write(0x33);
          Serial.write(0x03);
          Serial.write(0xFF);
          } 
}

/************* Image effects ****************/
void ViscaFX(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 0 ) {
          Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x63);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
          } 
      if ( value == 1 ) {
          Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x63);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      if ( value == 2 ) {
          Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x63);
           Serial.write(0x04);
           Serial.write(0xFF); 
          } 
}
void ViscaReverse(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x61);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      else { 
          Serial.write(0x81);
          Serial.write(0x01);
          Serial.write(0x04);
          Serial.write(0x61);
          Serial.write(0x03);
          Serial.write(0xFF);
          } 
}
void ViscaFlip(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x66);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      else { 
          Serial.write(0x81);
          Serial.write(0x01);
          Serial.write(0x04);
          Serial.write(0x66);
          Serial.write(0x03);
          Serial.write(0xFF);
          } 
}
void ViscaFreeze(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x62);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      else { 
          Serial.write(0x81);
          Serial.write(0x01);
          Serial.write(0x04);
          Serial.write(0x62);
          Serial.write(0x03);
          Serial.write(0xFF);
          } 
}
void ViscaWB(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
      if ( value == "auto" ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
          } 
      if ( value == "indoor") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x01);
           Serial.write(0xFF);
          } 
      if ( value == "outdoor") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x02);
           Serial.write(0xFF);
          } 
      if ( value == "one push") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x03);
           Serial.write(0xFF);
          } 
      if ( value == "ATW") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x04);
           Serial.write(0xFF);
          } 
      if ( value == "manual") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x05);
           Serial.write(0xFF);
          } 
      if ( value == "one push trigger") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x10);
           Serial.write(0x05);
           Serial.write(0xFF);
          } 
      if ( value == "outdoor auto") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x06);
           Serial.write(0xFF);
          } 
      if ( value == "sodium lamp auto") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x07);
           Serial.write(0xFF);
          } 
      if ( value == "sodium lamp") {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x08  );
           Serial.write(0xFF);
          } 
}
void ViscaExposure(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 0 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x39);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
          } 
      if ( value == 1) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x39);
           Serial.write(0x03);
           Serial.write(0xFF);
          } 
      if ( value == 2) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x39);
           Serial.write(0x0A);
           Serial.write(0xFF);
          } 
      if ( value == 3) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x39);
           Serial.write(0x0B);
           Serial.write(0xFF);
          } 
}
void ViscaGain(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 0 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4C);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
          } 
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4C);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x01);
           Serial.write(0xFF); 
          } 
      if ( value == 2 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4C);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
      if ( value == 3 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4C);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x03);
           Serial.write(0xFF); 
          } 
}
void ViscaShutter(OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 0 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
          } 
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x01);
           Serial.write(0xFF); 
          } 
     if ( value == 2 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x02);
           Serial.write(0xFF); 
          } 
     if ( value == 3 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x03);
           Serial.write(0xFF); 
          } 
     if ( value == 4 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x04);
           Serial.write(0xFF); 
          } 
     if ( value == 5 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x05);
           Serial.write(0xFF); 
          } 
     if ( value == 6 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x06);
           Serial.write(0xFF); 
          } 
     if ( value == 7 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4A);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x07);
           Serial.write(0xFF); 
          } 
}
void ViscaIris (OSCMessage *_mes) {
    int value = _mes->getArgInt32(0);
      if ( value == 0 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4B);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
          } 
      if ( value == 1 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x4B);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write((uint8_t) 0);
           Serial.write(0x01);
           Serial.write(0xFF); 
          } 
}