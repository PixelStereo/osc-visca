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
  server.addCallback("/visca/zoom/stop",&ViscaZoomStop);
  server.addCallback("/visca/zoom/standart",&ViscaZoomStandard);
  server.addCallback("/visca/zoom/variable",&ViscaZoomVariable);
  server.addCallback("/visca/zoom",&ViscaZoom);
  server.addCallback("/visca/zoom/digital/sw",&ViscaZoomDigitalSw);
  server.addCallback("/visca/zoom/digital/mode",&ViscaZoomDigitalMode);
  server.addCallback("/visca/zoom/digital/stop",&ViscaZoomDigitalStop);
  server.addCallback("/visca/zoom/digital/variable",&ViscaZoomDigitalVariable);
  server.addCallback("/visca/zoom/digital/variable",&ViscaZoomDigitalDirect);
  server.addCallback("/visca/focus/stop",&ViscaFocusStop);
  server.addCallback("/visca/focus/standart",&ViscaFocusStandard);
  server.addCallback("/visca/focus/variable",&ViscaFocusVariable);
  server.addCallback("/visca/focus",&ViscaFocus);
  server.addCallback("/visca/focus/mode",&ViscaFocusMode);
  server.addCallback("/visca/focus/trigger",&ViscaFocusTrigger);
  server.addCallback("/visca/focus/infinity",&ViscaFocusInfinity);
  server.addCallback("/visca/focus/nearlimit",&ViscaFocusNearLimit);
  server.addCallback("/visca/focus/auto/sensitivity",&ViscaFocusAFSens);
  server.addCallback("/visca/focus/auto/mode",&ViscaFocusAFMode);
  server.addCallback("/visca/focus/auto/zoomtrigger",&ViscaFocusAFZoomTrigger);
  server.addCallback("/visca/focus/auto/interval",&ViscaFocusAFInterval);
  server.addCallback("/visca/zoomfocus",&ViscaZoomFocus);
  server.addCallback("/visca/ir/correction",&ViscaIRCorrection);
  server.addCallback("/visca.1/init",&ViscaInit);
  server.addCallback("/visca.1/gain/red",&ViscaRedGain);
  server.addCallback("/visca.1/gain/blue",&ViscaBlueGain);
  server.addCallback("/visca.1/whitebalance",&ViscaWB);
  server.addCallback("/visca.1/mode",&ViscaExposure);
  server.addCallback("/visca.1/shutter",&ViscaShutter);
  server.addCallback("/visca.1/iris",&ViscaIris);
  server.addCallback("/visca.1/gain",&ViscaGain);
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
    ViscaMsg[5] =  0x02;
  } 
  else {
    ViscaMsg[5] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Zoom Stop ****************/
void ViscaZoomStop(OSCMessage *_mes) {
  ViscaMsg[4] =  0x07;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );

}
/************* Zoom Standard ****************/
void ViscaZoomStandard(OSCMessage *_mes) {
  ViscaMsg[4] =  0x07;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);  
  if ( value == "tele" ) {
    ViscaMsg[5] =  0x02;
  }
  if ( value == "wide" ) {
    ViscaMsg[5] =  0x03;
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Zoom Variable ****************/
void ViscaZoomVariable(OSCMessage *_mes) {
  ViscaMsg[4] =  0x07;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  int value2 = _mes->getArgInt32(1);
  _mes->getArgString(0,value);
  if (value == "tele") {
    if (value2 == 0) {
      ViscaMsg[5] =  0x20;
    }
    if (value2 == 1) {
      ViscaMsg[5] =  0x21;
    }
    if (value2 == 2) {
      ViscaMsg[5] =  0x22;
    }
    if (value2 == 3) {
      ViscaMsg[5] =  0x23;
    }
    if (value2 == 4) {
      ViscaMsg[5] =  0x24;
    }
    if (value2 == 5) {
      ViscaMsg[5] =  0x25;
    }
    if (value2 == 6) {
      ViscaMsg[5] =  0x25;
    }
    if (value2 == 7) {
      ViscaMsg[5] =  0x27;
    }
  }
  if (value == "wide") {
    if (value2 == 0) {
      ViscaMsg[5] =  0x30;
    }
    if (value2 == 1) {
      ViscaMsg[5] =  0x31;
    }
    if (value2 == 2) {
      ViscaMsg[5] =  0x32;
    }
    if (value2 == 3) {
      ViscaMsg[5] =  0x33;
    }
    if (value2 == 4) {
      ViscaMsg[5] =  0x34;
    }
    if (value2 == 5) {
      ViscaMsg[5] =  0x35;
    }
    if (value2 == 6) {
      ViscaMsg[5] =  0x35;
    }
    if (value2 == 7) {
      ViscaMsg[5] =  0x37;
    }
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Zoom Direct ****************/
void ViscaZoom(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16 ; 
  int valueb = value >> 4 % 16  ; 
  int valuec = value >> 8 % 16 ; 
  int valued = value >> 12 % 16 ; 
  ViscaLongMsg[4] =  0x47;
  ViscaLongMsg[5] =  valued;
  ViscaLongMsg[6] =  valuec;
  ViscaLongMsg[7] =  valueb;
  ViscaLongMsg[8] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Digital Zoom Switch ****************/
void ViscaZoomDigitalSw(OSCMessage *_mes) {
  ViscaMsg[4] =  0x06;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
    ViscaMsg[5] =  0x02;
  } 
  else {
    ViscaMsg[5] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Digital Zoom Mode ****************/
void ViscaZoomDigitalMode(OSCMessage *_mes) {
  ViscaMsg[4] =  0x36;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);  
  if ( value == "combine" ) {
    ViscaMsg[5] =  0x00;
  }
  if ( value == "separate" ) {
    ViscaMsg[5] =  0x01;
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Digital Zoom Stop ****************/
void ViscaZoomDigitalStop(OSCMessage *_mes) {
  ViscaMsg[4] =  0x06;
  ViscaMsg[5] =  0x00;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Digital Zoom Variable ****************/
void ViscaZoomDigitalVariable(OSCMessage *_mes) {
  ViscaMsg[4] =  0x07;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  int value2 = _mes->getArgInt32(1);
  _mes->getArgString(0,value);
  if (value == "tele") {
    if (value2 == 0) {
      ViscaMsg[5] =  0x20;
    }
    if (value2 == 1) {
      ViscaMsg[5] =  0x21;
    }
    if (value2 == 2) {
      ViscaMsg[5] =  0x22;
    }
    if (value2 == 3) {
      ViscaMsg[5] =  0x23;
    }
    if (value2 == 4) {
      ViscaMsg[5] =  0x24;
    }
    if (value2 == 5) {
      ViscaMsg[5] =  0x25;
    }
    if (value2 == 6) {
      ViscaMsg[5] =  0x25;
    }
    if (value2 == 7) {
      ViscaMsg[5] =  0x27;
    }
  }
  if (value == "wide") {
    if (value2 == 0) {
      ViscaMsg[5] =  0x30;
    }
    if (value2 == 1) {
      ViscaMsg[5] =  0x31;
    }
    if (value2 == 2) {
      ViscaMsg[5] =  0x32;
    }
    if (value2 == 3) {
      ViscaMsg[5] =  0x33;
    }
    if (value2 == 4) {
      ViscaMsg[5] =  0x34;
    }
    if (value2 == 5) {
      ViscaMsg[5] =  0x35;
    }
    if (value2 == 6) {
      ViscaMsg[5] =  0x35;
    }
    if (value2 == 7) {
      ViscaMsg[5] =  0x37;
    }
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
} 
/************* Digital Zoom Direct ****************/
void ViscaZoomDigitalDirect(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16 ; 
  int valueb = value >> 4 % 16  ; 
  int valuec = value >> 8 % 16 ; 
  int valued = value >> 12 % 16 ; 
  ViscaLongMsg[4] =  0x47;
  ViscaLongMsg[5] =  valued;
  ViscaLongMsg[6] =  valuec;
  ViscaLongMsg[7] =  valueb;
  ViscaLongMsg[8] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Focus Stop ****************/
void ViscaFocusStop(OSCMessage *_mes) {
  ViscaMsg[4] =  0x08;
  ViscaMsg[5] =  0x00;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Standard ****************/
void ViscaFocusStandard(OSCMessage *_mes) {
  ViscaMsg[4] =  0x08;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if (value == "far") {
    ViscaMsg[5] =  0x02;

  }
  if (value == "near") {
    ViscaMsg[5] =  0x03;
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Variable ****************/
void ViscaFocusVariable(OSCMessage *_mes) {
  ViscaMsg[4] =  0x08;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  int value2 = _mes->getArgInt32(1);
  _mes->getArgString(0,value);
  if (value == "far") {
    if (value2 == 0) {
      ViscaMsg[5] =  0x20;
    }
    if (value2 == 1) {
      ViscaMsg[5] =  0x21;
    }
    if (value2 == 2) {
      ViscaMsg[5] =  0x22;
    }
    if (value2 == 3) {
      ViscaMsg[5] =  0x23;
    }
    if (value2 == 4) {
      ViscaMsg[5] =  0x24;
    }
    if (value2 == 5) {
      ViscaMsg[5] =  0x25;
    }
    if (value2 == 6) {
      ViscaMsg[5] =  0x25;
    }
    if (value2 == 7) {
      ViscaMsg[5] =  0x27;
    }
  }
  if (value == "near") {
    if (value2 == 0) {
      ViscaMsg[5] =  0x30;
    }
    if (value2 == 1) {
      ViscaMsg[5] =  0x31;
    }
    if (value2 == 2) {
      ViscaMsg[5] =  0x32;
    }
    if (value2 == 3) {
      ViscaMsg[5] =  0x33;
    }
    if (value2 == 4) {
      ViscaMsg[5] =  0x34;
    }
    if (value2 == 5) {
      ViscaMsg[5] =  0x35;
    }
    if (value2 == 6) {
      ViscaMsg[5] =  0x35;
    }
    if (value2 == 7) {
      ViscaMsg[5] =  0x37;
    }
  }
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Direct ****************/
void ViscaFocus(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16 ; 
  int valueb = value >> 4 % 16  ; 
  int valuec = value >> 8 % 16 ; 
  int valued = value >> 12 % 16 ; 
  ViscaLongMsg[4] =  0x47;
  ViscaLongMsg[5] =  valued;
  ViscaLongMsg[6] =  valuec;
  ViscaLongMsg[7] =  valueb;
  ViscaLongMsg[8] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Focus Auto ****************/
void ViscaFocusMode(OSCMessage *_mes) {
  ViscaMsg[4] =  0x38;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "auto" ) {
   ViscaMsg[4] =  0x02;
  } 
  if ( value == "manual" ) {
   ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Trigger ****************/
void ViscaFocusTrigger(OSCMessage *_mes) {
  ViscaMsg[4] =  0x18;
  ViscaMsg[4] =  0x01;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Infinity ****************/
void ViscaFocusInfinity(OSCMessage *_mes) {
  ViscaMsg[4] =  0x18;
  ViscaMsg[5] =  0x02;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Near Limit ****************/
void ViscaFocusNearLimit(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16 ; 
  int valueb = value >> 4 % 16  ; 
  int valuec = value >> 8 % 16 ; 
  int valued = value >> 12 % 16 ; 
  ViscaLongMsg[4] =  0x47;
  ViscaLongMsg[5] =  valued;
  ViscaLongMsg[6] =  valuec;
  ViscaLongMsg[7] =  valueb;
  ViscaLongMsg[8] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Focus Sensitivity ****************/
void ViscaFocusAFSens(OSCMessage *_mes) {
  ViscaMsg[4] =  0x58;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "normal" ) {
  ViscaMsg[4] =  0x02;

  } 
  if ( value == "low" ) {
  ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Auto Mode ****************/
void ViscaFocusAFMode(OSCMessage *_mes) {
  ViscaMsg[4] =  0x57;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "normal" ) {
  ViscaMsg[4] =  0x00;
  } 
  if ( value == "interval" ) {
  ViscaMsg[4] =  0x01;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Zoom Trigger ****************/
void ViscaFocusAFZoomTrigger(OSCMessage *_mes) {
  ViscaMsg[4] =  0x57;
  ViscaMsg[5] =  0x02;
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Focus Auto Interval ****************/
void ViscaFocusAFInterval(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value % 16 ; 
  int valueb = value >> 4 % 16  ; 
  int valuec = value >> 8 % 16 ; 
  int valued = value >> 12 % 16 ; 
  ViscaLongMsg[4] =  0x47;
  ViscaLongMsg[5] =  valued;
  ViscaLongMsg[6] =  valuec;
  ViscaLongMsg[7] =  valueb;
  ViscaLongMsg[8] =  valuea;
  Serial.write( ViscaLongMsg, sizeof(ViscaLongMsg) );
}
/************* Infra-Red Correction ****************/
void ViscaIRCorrection(OSCMessage *_mes) {
  ViscaMsg[4] =  0x11;
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
  ViscaMsg[4] =  0x01;
  } 
  else { 
  ViscaMsg[4] =  0x00;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Zoom Focus ****************/
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
  ViscaMsg[4] =  0x19;
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "lens" ) {
  ViscaMsg[4] =  0x01;
  } 
  if ( value == "camera" ) {
  ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}  
/************* Red Gain ****************/
void ViscaRedGain(OSCMessage *_mes) {
  int RGvalue = _mes->getArgInt32(0);
  int RGaina = RGvalue % 16 ; 
  int RGainb = RGvalue >> 4 % 16  ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x43);
  Serial.write((uint8_t) 0);
  Serial.write((uint8_t) 0);
  Serial.write((byte)RGainb);
  Serial.write((byte)RGaina);
  Serial.write(0xFF);
}
/************* Blue Gain ****************/
void ViscaBlueGain(OSCMessage *_mes) {
  int BGvalue = _mes->getArgInt32(0);
  int BGaina = BGvalue % 16 ; 
  int BGainb = BGvalue >> 4 % 16  ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x44);
  Serial.write((uint8_t) 0);
  Serial.write((uint8_t) 0);
  Serial.write((byte)BGainb);
  Serial.write((byte)BGaina);
  Serial.write(0xFF);
}
/************* White Balance ****************/
void ViscaWB(OSCMessage *_mes) {
  uint8_t ViscaMsg[6] = {  
    0x81, 0x01, 0x04, 0x35, 0x00, 0xFF                      };
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);  
  if ( value == "auto" ) {
    ViscaMsg[5] =  0x0D;
  }
  if ( value == "indoor" ) {
    ViscaMsg[5] =  0x01;
  }
  if ( value == "outdoor" ) {
    ViscaMsg[5] =  0x02;
  }
  if ( value == "one push" ) {
    ViscaMsg[5] =  0x03;
  }
  if ( value == "ATW" ) {
    ViscaMsg[5] =  0x04;
  }
  if ( value == "manual" ) {
    ViscaMsg[5] =  0x0D;
  }
  if ( value == "one push trigger" ) {
    ViscaMsg[4] =  0x10;
    ViscaMsg[5] =  0x05;
  }
  if ( value == "outdoor auto" ) {
    ViscaMsg[5] =  0x06;
  }
  if ( value == "sodium lamp auto" ) {
    ViscaMsg[5] =  0x07;
  }
  if ( value == "sodium lamp" ) {
    ViscaMsg[5] =  0x08;
  }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
/************* Exposure Mode ****************/
void ViscaExposure(OSCMessage *_mes) {
  uint8_t ViscaMsg[6] = {  
    0x81, 0x01, 0x04, 0x39, 0x00, 0xFF                      };
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "auto" ) {
    ViscaMsg[5] =  0x00;
  }
  if ( value == "manual" ) {
    ViscaMsg[5] =  0x03;
  }
  if ( value == "shutter" ) {
    ViscaMsg[5] =  0x0A;
  }
  if ( value == "iris" ) {
    ViscaMsg[5] =  0x0B;
  }
  if ( value == "bright" ) {
    ViscaMsg[5] =  0x0D;
  }
    Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}

/************* Shutter ****************/
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
/************* IRIS ****************/
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
  if ( value == 2 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
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
    Serial.write(0x4B);
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
    Serial.write(0x4B);
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
    Serial.write(0x4B);
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
    Serial.write(0x4B);
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
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x07);
    Serial.write(0xFF); 
  } 
  if ( value == 8 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x08);
    Serial.write(0xFF); 
  } 
  if ( value == 9 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x09);
    Serial.write(0xFF); 
  } 
  if ( value == 10 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x10);
    Serial.write(0xFF); 
  } 
  if ( value == 11 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x11);
    Serial.write(0xFF); 
  } 
  if ( value == 12 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x12);
    Serial.write(0xFF); 
  } 
  if ( value == 13 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x13);
    Serial.write(0xFF); 
  } 
  if ( value == 14 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x14);
    Serial.write(0xFF); 
  } 
  if ( value == 15 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x15);
    Serial.write(0xFF); 
  } 
  if ( value == 16 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x01);
    Serial.write((uint8_t) 0);
    Serial.write(0xFF); 
  } 
  if ( value == 17 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x01);
    Serial.write(0x01);
    Serial.write(0xFF); 
  } 
  if ( value == 18 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x01);
    Serial.write(0x02);
    Serial.write(0xFF); 
  } 
  if ( value == 19 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x01);
    Serial.write(0x03);
    Serial.write(0xFF); 
  } 
  if ( value == 20 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0xFF); 
  } 
  if ( value == 21 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4B);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x01);
    Serial.write(0x05);
    Serial.write(0xFF); 
  } 
}
/************* Gain ****************/
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
  if ( value == 4 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4C);
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
    Serial.write(0x4C);
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
    Serial.write(0x4C);
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
    Serial.write(0x4C);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x07);
    Serial.write(0xFF); 
  }
  if ( value == 8 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4C);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x08);
    Serial.write(0xFF); 
  }
}
/************* Bright ****************/
void ViscaBright(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  if ( value == 0 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4D);
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
    Serial.write(0x4D);
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
    Serial.write(0x4D);
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
    Serial.write(0x4D);
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
    Serial.write(0x4D);
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
    Serial.write(0x4D);
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
    Serial.write(0x4D);
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
    Serial.write(0x4D);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x07);
    Serial.write(0xFF); 
  }
  if ( value == 8 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x4D);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write((uint8_t) 0);
    Serial.write(0x08);
    Serial.write(0xFF); 
  }
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
/************* Horizontal Reverse ****************/
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
/************* FVertical Flip****************/
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
/************* Freeze ****************/
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












