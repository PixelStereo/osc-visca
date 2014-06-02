
void setup()
{
  server.addCallback("/visca/AddressSet",&ViscaAddressSet);
  server.addCallback("/visca/ifclear",&ViscaIfClear);
  server.addCallback("/visca/cancel",&ViscaCancel);
  server.addCallback("/visca.1/init/internal",&ViscaInit);
  server.addCallback("/visca.1/auto/response",&ViscaAutoResponse);
  server.addCallback("/visca.1/compensation/sw",&ViscaExpComp);
  server.addCallback("/visca.1/compensation/level",&ViscaExpCompDirect);
  server.addCallback("/visca.1/slowshutter",&ViscaSlowShutter);
  server.addCallback("/visca.1/backlight",&ViscaBackLight);
  server.addCallback("/visca.1/reverse",&ViscaReverse);
  server.addCallback("/visca.1/flip",&ViscaFlip);
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

/************* Zoom Focus ****************/
void ViscaZoomFocus(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int value2 = _mes->getArgInt32(1);
  int ZFZooma = value & 15 ; 
  int ZFZoomb = value >> 4 & 15  ; 
  int ZFZoomc = value >> 8 & 15 ; 
  int ZFZoomd = value >> 12 & 15 ; 
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
}

/************* Auto Response ****************/
void ViscaAutoResponse(OSCMessage *_mes) {
  int value = _mes->getArgInt32(0);
  int valuea = value & 15; 
  int valuebZ = value >> 4; 
  int valueb = valuebZ & 15  ; 
  ViscaLongMsg[3] =  0x5D;
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

