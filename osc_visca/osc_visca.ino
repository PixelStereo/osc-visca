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
    Ethernet.begin(mac, ip);
  server.begin(serverPort);  
  Serial.begin(9600);
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
/*  server.addCallback("/visca.1/shutter",&ViscaShutter);
  server.addCallback("/visca.1/iris",&ViscaIris);
  server.addCallback("/visca.1/zoom/digital/sw",&ViscaDigitalSw);
  server.addCallback("/visca.1/zoom/mode",&ViscaZoomMode);
  server.addCallback("/visca.1/zoom",&ViscaZoom);
  server.addCallback("/visca.1/focus/auto",&ViscaFocusAuto);
  server.addCallback("/visca.1/focus/value",&ViscaFocusValue);
  server.addCallback("/visca.1/focus/near",&ViscaFocusNear); */
}

void loop()
{ 
    if(server.aviableCheck()>0)
    {
   
    }
}

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
    int value = _mes->getArgInt32(0);
      if ( value == 0 ) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write((uint8_t) 0);
           Serial.write(0xFF); 
          } 
      if ( value == 1) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x01);
           Serial.write(0xFF);
          } 
      if ( value == 2) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x02);
           Serial.write(0xFF);
          } 
      if ( value == 3) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x03);
           Serial.write(0xFF);
          } 
      if ( value == 4) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x04);
           Serial.write(0xFF);
          } 
      if ( value == 5) {
           Serial.write(0x81);
           Serial.write(0x01);
           Serial.write(0x04);
           Serial.write(0x35);
           Serial.write(0x05);
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
