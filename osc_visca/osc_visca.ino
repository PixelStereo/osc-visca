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
  int Swvalue = _mes->getArgInt32(0);
  if ( Swvalue == 1 ) {
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
  char ZoomSdvalue[strSize]; //string memory allocation
  _mes->getArgString(0,ZoomSdvalue);
  if (ZoomSdvalue == "tele") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x07);
    Serial.write(0x02);
    Serial.write(0xFF); 
  }
  if (ZoomSdvalue == "wide") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x07);
    Serial.write(0x03);
    Serial.write(0xFF); 
  }
}
/************* Zoom Variable ****************/
void ViscaZoomVariable(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char ZoomVbvalue[strSize]; //string memory allocation
  int ZoomVbvalue2=2 + _mes->getArgInt32(1);
  _mes->getArgString(0,ZoomVbvalue);
  if (ZoomVbvalue == "tele") {
    if (ZoomVbvalue2 == 0) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x20);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 1) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x21);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 2) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x22);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 3) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x23);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 4) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x24);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 5) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x25);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 6) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x26);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 7) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x27);
      Serial.write(0xFF); 
    }
  }
  if (ZoomVbvalue == "wide") {
    if (ZoomVbvalue2 == 0) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 1) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x31);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 2) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x32);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 3) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x33);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 4) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x34);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 5) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x35);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 6) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x07);
      Serial.write(0x36);
      Serial.write(0xFF); 
    }
    if (ZoomVbvalue2 == 7) {
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
  int Zoomvalue = _mes->getArgInt32(0);
  int zooma = Zoomvalue % 16 ; 
  int zoomb = Zoomvalue >> 4 % 16  ; 
  int zoomc = Zoomvalue >> 8 % 16 ; 
  int zoomd = Zoomvalue >> 12 % 16 ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x47);
  Serial.write((byte)zoomd);
  Serial.write((byte)zoomc);
  Serial.write((byte)zoomb);
  Serial.write((byte)zooma);
  Serial.write(0xFF); 
}
/************* Digital Zoom Switch ****************/
void ViscaZoomDigitalSw(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x06);
    Serial.write(0x02);
    Serial.write(0xFF); 
  } 
  else { 
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x06);
    Serial.write(0x03);
    Serial.write(0xFF);
  } 
}
/************* Digital Zoom Switch ****************/
void ViscaZoomDigitalMode(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "combine" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x36);
    Serial.write((uint8_t) 0);
    Serial.write(0xFF); 
  } 
  if ( value == "separate" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x36);
    Serial.write(0x01);
    Serial.write(0xFF);
  } 
}
/************* Digital Zoom Stop ****************/
void ViscaZoomDigitalStop(OSCMessage *_mes) {
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x06);
  Serial.write((uint8_t) 0);
  Serial.write(0xFF); 
} 
/************* Digital Zoom Variable ****************/
void ViscaZoomDigitalVariable(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  int value2=_mes->getArgInt32(1);
  _mes->getArgString(0,value);
  if (value == "tele") {
    if (value2 == 0) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x20);
      Serial.write(0xFF); 
    }
    if (value2 == 1) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x21);
      Serial.write(0xFF); 
    }
    if (value2 == 2) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x22);
      Serial.write(0xFF); 
    }
    if (value2 == 3) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x23);
      Serial.write(0xFF); 
    }
    if (value2 == 4) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x24);
      Serial.write(0xFF); 
    }
    if (value2 == 5) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x25);
      Serial.write(0xFF); 
    }
    if (value2 == 6) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x26);
      Serial.write(0xFF); 
    }
    if (value2 == 7) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x27);
      Serial.write(0xFF); 
    }
  }
  if (value == "wide") {
    if (value2 == 0) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x30);
      Serial.write(0xFF); 
    }
    if (value2 == 1) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x31);
      Serial.write(0xFF); 
    }
    if (value2 == 2) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x32);
      Serial.write(0xFF); 
    }
    if (value2 == 3) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x33);
      Serial.write(0xFF); 
    }
    if (value2 == 4) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x34);
      Serial.write(0xFF); 
    }
    if (value2 == 5) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x35);
      Serial.write(0xFF); 
    }
    if (value2 == 6) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x36);
      Serial.write(0xFF); 
    }
    if (value2 == 7) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x06);
      Serial.write(0x37);
      Serial.write(0xFF); 
    }
  }
}
/************* Digital Zoom Direct ****************/
void ViscaZoomDigitalDirect(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int zooma = value % 16 ; 
  int zoomb = value >> 4 % 16  ; 
  int zoomc = value >> 8 % 16 ; 
  int zoomd = value >> 12 % 16 ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x46);
  Serial.write((byte)zoomd);
  Serial.write((byte)zoomc);
  Serial.write((byte)zoomb);
  Serial.write((byte)zooma);
  Serial.write(0xFF); 
}
/************* Focus Stop ****************/
void ViscaFocusStop(OSCMessage *_mes) {
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x08);
  Serial.write((uint8_t) 0);
  Serial.write(0xFF); 
}
/************* Focus Standard ****************/
void ViscaFocusStandard(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if (value == "far") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x08);
    Serial.write(0x02);
    Serial.write(0xFF); 
  }
  if (value == "near") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x08);
    Serial.write(0x03);
    Serial.write(0xFF); 
  }
}
/************* Focus Variable ****************/
void ViscaFocusVariable(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  int value2=_mes->getArgInt32(1);
  _mes->getArgString(0,value);
  if (value == "far") {
    if (value2 == 0) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x20);
      Serial.write(0xFF); 
    }
    if (value2 == 1) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x21);
      Serial.write(0xFF); 
    }
    if (value2 == 2) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x22);
      Serial.write(0xFF); 
    }
    if (value2 == 3) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x23);
      Serial.write(0xFF); 
    }
    if (value2 == 4) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x24);
      Serial.write(0xFF); 
    }
    if (value2 == 5) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x25);
      Serial.write(0xFF); 
    }
    if (value2 == 6) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x26);
      Serial.write(0xFF); 
    }
    if (value2 == 7) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x27);
      Serial.write(0xFF); 
    }
  }
  if (value == "near") {
    if (value2 == 0) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x30);
      Serial.write(0xFF); 
    }
    if (value2 == 1) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x31);
      Serial.write(0xFF); 
    }
    if (value2 == 2) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x32);
      Serial.write(0xFF); 
    }
    if (value2 == 3) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x33);
      Serial.write(0xFF); 
    }
    if (value2 == 4) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x34);
      Serial.write(0xFF); 
    }
    if (value2 == 5) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x35);
      Serial.write(0xFF); 
    }
    if (value2 == 6) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x36);
      Serial.write(0xFF); 
    }
    if (value2 == 7) {
      Serial.write(0x81);
      Serial.write(0x01);
      Serial.write(0x04);
      Serial.write(0x08);
      Serial.write(0x37);
      Serial.write(0xFF); 
    }
  }
}
/************* Focus Direct ****************/
void ViscaFocus(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int Focusa = value % 16 ; 
  int Focusb = value >> 4 % 16  ; 
  int Focusc = value >> 8 % 16 ; 
  int Focusd = value >> 12 % 16 ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x48);
  Serial.write((byte)Focusd);
  Serial.write((byte)Focusc);
  Serial.write((byte)Focusb);
  Serial.write((byte)Focusa);
  Serial.write(0xFF); 
}
/************* Focus Auto ****************/
void ViscaFocusMode(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "auto" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x38);
    Serial.write(0x02);
    Serial.write(0xFF); 
  } 
  if ( value == "manual" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x38);
    Serial.write(0x03);
    Serial.write(0xFF);
  } 
}
/************* Focus Trigger ****************/
void ViscaFocusTrigger(OSCMessage *_mes) {
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x18);
  Serial.write(0x01);
  Serial.write(0xFF); 
}
/************* Focus Infinity ****************/
void ViscaFocusInfinity(OSCMessage *_mes) {
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x18);
  Serial.write(0x02);
  Serial.write(0xFF); 
}
/************* Focus Near Limit ****************/
void ViscaFocusNearLimit(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int FocusNearLimita = value % 16 ; 
  int FocusNearLimitb = value >> 4 % 16  ; 
  int FocusNearLimitc = value >> 8 % 16 ; 
  int FocusNearLimitd = value >> 12 % 16 ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x48);
  Serial.write((byte)FocusNearLimitd);
  Serial.write((byte)FocusNearLimitc);
  Serial.write((byte)FocusNearLimitb);
  Serial.write((byte)FocusNearLimita);
  Serial.write(0xFF); 
}
/************* Focus Sensitivity ****************/
void ViscaFocusAFSens(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "normal" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x58);
    Serial.write(0x02);
    Serial.write(0xFF); 
  } 
  if ( value == "low" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x58);
    Serial.write(0x03);
    Serial.write(0xFF);
  } 
}
/************* Focus Auto Mode ****************/
void ViscaFocusAFMode(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "normal" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x57);
    Serial.write((uint8_t) 0);
    Serial.write(0xFF); 
  } 
  if ( value == "interval" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x57);
    Serial.write(0x01);
    Serial.write(0xFF);
  } 
}
/************* Focus Zoom Trigger ****************/
void ViscaFocusAFZoomTrigger(OSCMessage *_mes) {
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x57);
  Serial.write(0x02);
  Serial.write(0xFF); 
}
/************* Focus Auto Interval ****************/
void ViscaFocusAFInterval(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int FocusAFIntervala = value % 16 ; 
  int FocusAFIntervalb = value >> 4 % 16  ; 
  int FocusAFIntervalc = value >> 8 % 16 ; 
  int FocusAFIntervald = value >> 12 % 16 ; 
  Serial.write(0x81);
  Serial.write(0x01);
  Serial.write(0x04);
  Serial.write(0x27);
  Serial.write((byte)FocusAFIntervald);
  Serial.write((byte)FocusAFIntervalc);
  Serial.write((byte)FocusAFIntervalb);
  Serial.write((byte)FocusAFIntervala);
  Serial.write(0xFF); 
}
/************* Infra-Red Correction ****************/
void ViscaIRCorrection(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  if ( value == 1 ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x11);
    Serial.write(0x01);
    Serial.write(0xFF); 
  } 
  else { 
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x11);
    Serial.write((uint8_t) 0);
    Serial.write(0xFF);
  } 
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
  int strSize=_mes->getArgStringSize(0);
  char value[strSize]; //string memory allocation
  _mes->getArgString(0,value);
  if ( value == "lens" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x19);
    Serial.write(0x01);
    Serial.write(0xFF); 
  } 
  if ( value == "camera" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x19);
    Serial.write(0x03);
    Serial.write(0xFF); 
  } 
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
/************* Exposure Mode ****************/
void ViscaExposure(OSCMessage *_mes) {
  int strSize=_mes->getArgStringSize(0);
  char Exposurevalue[strSize]; //string memory allocation
  _mes->getArgString(0,Exposurevalue);
  if ( Exposurevalue == "auto" ) {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x39);
    Serial.write((uint8_t) 0);
    Serial.write(0xFF); 
  } 
  if ( Exposurevalue == "manual") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x39);
    Serial.write(0x03);
    Serial.write(0xFF);
  } 
  if ( Exposurevalue == "shutter") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x39);
    Serial.write(0x0A);
    Serial.write(0xFF);
  } 
  if ( Exposurevalue == "iris") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x39);
    Serial.write(0x0B);
    Serial.write(0xFF);
  } 
  if ( Exposurevalue == "bright") {
    Serial.write(0x81);
    Serial.write(0x01);
    Serial.write(0x04);
    Serial.write(0x39);
    Serial.write(0x0D);
    Serial.write(0xFF);
  } 
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
