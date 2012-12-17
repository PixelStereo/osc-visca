#include <Ethernet.h>
#include <SPI.h>
#include <ArdOSC.h>
#include <string.h>
/************* Variables ****************/
byte mac[] = { 
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
byte ip[] = { 
  10, 0, 0, 10 };
int serverPort = 10000;
int incomingByte = 0;   // for incoming serial data
OSCMessage global_mes;
int destPort = 12000;
OSCServer server;
OSCClient client;
byte destIp[]  = { 
  10, 0, 0, 4 };
uint8_t ViscaMsg[6] = {  
  0x81, 0x01, 0x04, 0x00, 0x00, 0xFF      };
uint8_t ViscaLongMsg[9] = {  
  0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0x00, 0x00, 0xFF            };
uint8_t ViscaMemMsg[7] = {  
  0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0xFF            };
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
  server.addCallback("/visca.1/sw",&ViscaSw);
  server.addCallback("/visca.1/zoom/stop",&ViscaZoomStop);
  server.addCallback("/visca.1/zoom/standart",&ViscaZoomStandard);
  server.addCallback("/visca.1/zoom/variable/wide",&ViscaZoomVariableWide);
  server.addCallback("/visca.1/zoom/variable/tele",&ViscaZoomVariableTele);
  server.addCallback("/visca.1/zoom",&ViscaZoom);
  server.addCallback("/visca.1/focus/stop",&ViscaFocusStop);
  server.addCallback("/visca.1/focus/standart",&ViscaFocusStandard);
  server.addCallback("/visca.1/focus/variable/far",&ViscaFocusVariableFar);
  server.addCallback("/visca.1/focus/variable/near",&ViscaFocusVariableNear);
  server.addCallback("/visca.1/focus",&ViscaFocus);
  server.addCallback("/visca.1/focus/mode",&ViscaFocusMode);
  server.addCallback("/visca.1/focus/auto/trigger",&ViscaFocusTrigger);
  server.addCallback("/visca.1/focus/infinity",&ViscaFocusInfinity);
  server.addCallback("/visca.1/focus/nearlimit",&ViscaFocusNearLimit);
  server.addCallback("/visca.1/focus/auto/sensitivity",&ViscaFocusAFSens);
  server.addCallback("/visca.1/focus/auto/mode",&ViscaFocusAFMode);
  server.addCallback("/visca.1/ir/correction",&ViscaIRCorrection);
  server.addCallback("/visca.1/init/internal",&ViscaInit);
  server.addCallback("/visca.1/whitebalance",&ViscaWB);
  server.addCallback("/visca.1/mode",&ViscaExposure);
  server.addCallback("/visca.1/auto/response",&ViscaAutoResponse);
  server.addCallback("/visca.1/compensation/sw",&ViscaExpComp);
  server.addCallback("/visca.1/compensation/level",&ViscaExpCompDirect);
  server.addCallback("/visca.1/slowshutter",&ViscaSlowShutter);
  server.addCallback("/visca.1/shutter",&ViscaShutter);
  server.addCallback("/visca.1/iris",&ViscaIris);
  server.addCallback("/visca.1/gain",&ViscaGain);
  server.addCallback("/visca.1/ir",&ViscaIR);
  server.addCallback("/visca.1/backlight",&ViscaBackLight);
  server.addCallback("/visca.1/reverse",&ViscaReverse);
  server.addCallback("/visca.1/flip",&ViscaFlip);
  server.addCallback("/visca.1/fx",&ViscaFX);
  server.addCallback("/visca.1/freeze",&ViscaFreeze);
  server.addCallback("/visca.1/stabilizer",&ViscaStab);
  server.addCallback("/visca.1/hs",&ViscaHS);
  server.addCallback("/visca.1/hr",&ViscaHR);
  server.addCallback("/visca.1/nr",&ViscaNR);
  server.addCallback("/visca.1/wd",&ViscaWD);
  server.addCallback("/visca.1/gamma",&ViscaGamma);
  server.addCallback("/visca.1/aperture",&ViscaAperture);
  server.addCallback("/visca.1/widedynamic",&ViscaWD);
  server.addCallback("/visca.1/memory/reset",&ViscaMemReset);
  server.addCallback("/visca.1/memory/set",&ViscaMemSet);
  server.addCallback("/visca.1/memory/recall",&ViscaMemRecall);
  server.addCallback("/visca.1/chromasupress",&ViscaChromaSuppress);
}
void loop()
{ 
  /************* // Check OSC messages ****************/
  int result = server.aviableCheck();
  if(result>0) {
  }
  /************* // Check Serial messages for loopback ****************/
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
  /************* // Send Serial messages to OSC ****************/
    global_mes.setAddress(destIp,destPort);
    global_mes.beginMessage("/visca/from");
    global_mes.addArgInt32(incomingByte);
    client.send(&global_mes);
    global_mes.flush(); //object data clear
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
  ViscaMsg[4] = ((uint8_t) 0);
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );

}
/************* Zoom Standard ****************/
void ViscaZoomStandard(OSCMessage *_mes) {
  ViscaMsg[3] =  0x07;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);  
  if ( memcmp(value,"tele",4) == 0) {
    ViscaMsg[4] =  0x02;
  }
  if ( memcmp(value,"wide",4) == 0) {
    ViscaMsg[4] =  0x03;
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
void ViscaZoomVariableTele(OSCMessage *_mes) {
  ViscaMsg[3] =  0x07;
  int value = _mes->getArgInt32(0);
  if (value >= 0 && value <= 7) {
    ViscaMsg[4] =  0x20 | value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}
void ViscaZoomVariableWide(OSCMessage *_mes) {
  ViscaMsg[3] =  0x07;
  int value = _mes->getArgInt32(0);
  if (value >= 0 && value <= 7) {
    ViscaMsg[4] =  0x30 | value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}
/************* Zoom Direct ****************/
void ViscaZoom(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valuecZ = value >> 8; 
  int valuedZ = value >> 12; 
  int valueb = valuebZ % 16  ; 
  int valuec = valuecZ % 16 ; 
  int valued = valuedZ % 16 ; 
  ViscaLongMsg[3] =  0x47;
  ViscaLongMsg[4] =  valued;
  ViscaLongMsg[5] =  valuec;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Focus Stop ****************/
void ViscaFocusStop(OSCMessage *_mes) {
  ViscaMsg[3] =  0x08;
  ViscaMsg[4] =  0x00;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Standard ****************/
void ViscaFocusStandard(OSCMessage *_mes) {
  ViscaMsg[3] =  0x08;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"far",3) == 0) {
    ViscaMsg[4] =  0x02;

  }
  if ( memcmp(value,"near",4) == 0) {
    ViscaMsg[4] =  0x03;
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Variable Near ****************/
void ViscaFocusVariableNear(OSCMessage *_mes) {
  ViscaMsg[3] =  0x08;
  int value = _mes->getArgInt32(0);
  if (value >= 0 && value <= 7) {
    ViscaMsg[4] =  0x20 | value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}
/************* Focus Variable Far ****************/
void ViscaFocusVariableFar(OSCMessage *_mes) {
  ViscaMsg[3] =  0x08;
  int value = _mes->getArgInt32(0);
  if (value >= 0 && value <= 7) {
    ViscaMsg[4] =  0x30 | value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
  }
}
/************* Focus Direct ****************/
void ViscaFocus(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valuecZ = value >> 8; 
  int valuedZ = value >> 12; 
  int valueb = valuebZ % 16  ; 
  int valuec = valuecZ % 16 ; 
  int valued = valuedZ % 16 ; 
  ViscaLongMsg[3] =  0x48;
  ViscaLongMsg[4] =  valued;
  ViscaLongMsg[5] =  valuec;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Focus Auto ****************/
void ViscaFocusMode(OSCMessage *_mes) {
  ViscaMsg[3] =  0x38;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"auto",4) == 0) {
   ViscaMsg[4] =  0x02;
  } 
  if ( memcmp(value,"manual",6) == 0) {
   ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Trigger ****************/
void ViscaFocusTrigger(OSCMessage *_mes) {
  ViscaMsg[3] =  0x18;
  ViscaMsg[4] =  0x01;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Infinity ****************/
void ViscaFocusInfinity(OSCMessage *_mes) {
  ViscaMsg[3] =  0x18;
  ViscaMsg[4] =  0x02;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Near Limit ****************/
void ViscaFocusNearLimit(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valuecZ = value >> 8; 
  int valuedZ = value >> 12; 
  int valueb = valuebZ % 16  ; 
  int valuec = valuecZ % 16 ; 
  int valued = valuedZ % 16 ; 
  ViscaLongMsg[3] =  0x28;
  ViscaLongMsg[4] =  valued;
  ViscaLongMsg[5] =  valuec;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Focus Sensitivity ****************/
void ViscaFocusAFSens(OSCMessage *_mes) {
  ViscaMsg[3] =  0x58;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"normal",6) == 0) {
  ViscaMsg[4] =  0x02;

  } 
  if ( memcmp(value,"low",3) == 0) {
  ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Auto Mode ****************/
void ViscaFocusAFMode(OSCMessage *_mes) {
  ViscaMsg[3] =  0x57;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"normal",6) == 0) {
  ViscaMsg[4] =  0x00;
  } 
  if ( memcmp(value,"interval",8) == 0) {
  ViscaMsg[4] =  0x01;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Zoom Trigger ****************/
void ViscaFocusAFZoomTrigger(OSCMessage *_mes) {
  ViscaMsg[3] =  0x57;
  ViscaMsg[4] =  0x02;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Infra-Red Correction ****************/
void ViscaIRCorrection(OSCMessage *_mes) {
  ViscaMsg[3] =  0x11;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x01;
  } 
  else { 
  ViscaMsg[4] =  0x00;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Zoom Focus ****************/
void ViscaZoomFocus(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int value2 = _mes->getArgInt32(1);
  int ZFZooma = value % 16 ; 
  int ZFZoomb = value >> 4 % 16  ; 
  int ZFZoomc = value >> 8 % 16 ; 
  int ZFZoomd = value >> 12 % 16 ; 
  int ZFFocusa = value % 16 ; 
  int ZFFocusb = value >> 4 % 16  ; 
  int ZFFocusc = value >> 8 % 16 ; 
  int ZFFocusd = value >> 12 % 16 ; 
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
}
/************* Init ****************/
void ViscaInit(OSCMessage *_mes) {
  ViscaMsg[3] =  0x19;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"lens",4) == 0) {
  ViscaMsg[4] =  0x01;
  } 
  if ( memcmp(value,"camera",6) == 0) {
  ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}  
/************* White Balance ****************/
void ViscaWB(OSCMessage *_mes) {
    ViscaMsg[3] =  0x35;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);  
  if ( memcmp(value,"auto",4) == 0) {
    ViscaMsg[4] =  0x00;
  }
  if ( memcmp(value,"indoor",6) == 0) {
    ViscaMsg[4] =  0x01;
  }
  if ( memcmp(value,"outdoor",7) == 0) {
    ViscaMsg[4] =  0x02;
  }
  if ( memcmp(value,"one push",8) == 0) {
    ViscaMsg[4] =  0x03;
  }
  if ( memcmp(value,"ATW",3) == 0) {
    ViscaMsg[4] =  0x04;
  }
  if ( memcmp(value,"manual",6) == 0) {
    ViscaMsg[4] =  0x05;
  }
  if ( memcmp(value,"one push trigger",16) == 0) {
    ViscaMsg[3] =  0x10;
    ViscaMsg[4] =  0x05;
  }
  if ( memcmp(value,"outdoor auto",12) == 0) {
    ViscaMsg[4] =  0x06;
  }
  if ( memcmp(value,"sodium lamp auto",16) == 0) {
    ViscaMsg[4] =  0x07;
  }
  if ( memcmp(value,"sodium lamp",11) == 0) {
    ViscaMsg[4] =  0x08;
  }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* AE Exposure Mode ****************/
void ViscaExposure(OSCMessage *_mes) {
    ViscaMsg[3] =  0x39;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"auto",4) == 0) {
    ViscaMsg[4] =  0x00;
  }
  if ( memcmp(value,"manual",6) == 0) {
    ViscaMsg[4] =  0x03;
  }
  if ( memcmp(value,"shutter",7) == 0) {
    ViscaMsg[4] =  0x0A;
  }
  if ( memcmp(value,"iris",4) == 0) {
    ViscaMsg[4] =  0x0B;
  }
  if ( memcmp(value,"bright",6) == 0) {
    ViscaMsg[4] =  0x0D;
  }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Slow Shutter ****************/
void ViscaSlowShutter(OSCMessage *_mes) {
  ViscaMsg[3] =  0x5A;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"auto",4) == 0) {
  ViscaMsg[4] =  0x02;
  } 
  if ( memcmp(value,"manual",6) == 0) {
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Shutter ****************/
void ViscaShutter(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ % 16  ; 
  ViscaLongMsg[3] =  0x4A;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Auto Response ****************/
void ViscaAutoResponse(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ % 16  ; 
  ViscaLongMsg[3] =  0x5D;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* IRIS ****************/
void ViscaIris (OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ % 16  ; 
  ViscaLongMsg[3] =  0x4B;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Gain ****************/
void ViscaGain(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ % 16  ; 
  ViscaLongMsg[3] =  0x4C;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Exposition Compensation ****************/
void ViscaExpComp(OSCMessage *_mes) {
  ViscaMsg[3] =  0x3E;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Exposition Compensation ****************/
void ViscaExpCompDirect(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ % 16  ; 
  ViscaLongMsg[3] =  0x4E;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Backlight ****************/
void ViscaBackLight(OSCMessage *_mes) {
  ViscaMsg[3] =  0x33;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Wide Dynamic ****************/
void ViscaWD(OSCMessage *_mes) {
  ViscaMsg[3] =  0x3D;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Aperture ****************/
void ViscaAperture(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ % 16  ; 
  ViscaLongMsg[3] =  0x42;
  ViscaLongMsg[4] =  0x00;
  ViscaLongMsg[5] =  0x00;
  ViscaLongMsg[6] =  valueb;
  ViscaLongMsg[7] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Noise Reduction ****************/
void ViscaNR(OSCMessage *_mes) {
  ViscaMsg[3] =  0x53;
  int value = _mes->getArgInt32(0);
  ViscaMsg[4] =  value;
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* High Resolution ****************/
void ViscaHR(OSCMessage *_mes) {
  ViscaMsg[3] =  0x52;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Gamma ****************/
void ViscaGamma(OSCMessage *_mes) {
  ViscaMsg[3] =  0x5B;
  int value = _mes->getArgInt32(0);
  ViscaMsg[4] =  value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* High Sensitivity ****************/
void ViscaHS(OSCMessage *_mes) {
  ViscaMsg[3] =  0x5E;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Horizontal Reverse ****************/
void ViscaReverse(OSCMessage *_mes) {
  ViscaMsg[3] =  0x61;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Freeze ****************/
void ViscaFreeze(OSCMessage *_mes) {
  ViscaMsg[3] =  0x62;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Image effects ****************/
void ViscaFX(OSCMessage *_mes) {
  ViscaMsg[3] =  0x63;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( memcmp(value,"off",3) == 0) {
  ViscaMsg[4] = ((uint8_t) 0);
  } 
  if ( memcmp(value,"neg art",7) == 0) {
  ViscaMsg[4] =  0x02;
  } 
  if ( memcmp(value,"bw",2) == 0) {
  ViscaMsg[4] =  0x04;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Vertical Flip****************/
void ViscaFlip(OSCMessage *_mes) {
  ViscaMsg[3] =  0x66;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Infra-Red ****************/
void ViscaIR(OSCMessage *_mes) {
  ViscaMsg[3] =  0x01;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Stabilizer****************/
void ViscaStab(OSCMessage *_mes) {
  ViscaMsg[3] =  0x34;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x02;
  } 
  else { 
  ViscaMsg[4] =  0x03;
  } 
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Memory Reset ****************/
void ViscaMemReset(OSCMessage *_mes) {
uint8_t ViscaMemMsg[7] = {  
  0x81, 0x01, 0x04, 0x3F, 0x00, 0x00, 0xFF      };
  int value = _mes->getArgInt32(0);
  ViscaMemMsg[5] =  value;
  Serial.write( ViscaMemMsg, sizeof(ViscaMemMsg) );
}
/************* Memory Set ****************/
void ViscaMemSet(OSCMessage *_mes) {
uint8_t ViscaMemMsg[7] = {  
  0x81, 0x01, 0x04, 0x3F, 0x01, 0x00, 0xFF      };
  int value = _mes->getArgInt32(0);
  ViscaMemMsg[5] =  value;
  Serial.write( ViscaMemMsg, sizeof(ViscaMemMsg) );
}
/************* Memory Recall  ****************/
void ViscaMemRecall(OSCMessage *_mes) {
uint8_t ViscaMemMsg[7] = {  
  0x81, 0x01, 0x04, 0x3F, 0x02, 0x00, 0xFF      };
  int value = _mes->getArgInt32(0);
  ViscaMemMsg[5] =  value;
  Serial.write (ViscaMemMsg, sizeof(ViscaMemMsg) );
}
/************* Chroma Supress  ****************/
void ViscaChromaSuppress(OSCMessage *_mes) {
  ViscaMsg[3] =  0x5F;
  int value = _mes->getArgInt32(0);
  ViscaMsg[4] =  value;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
