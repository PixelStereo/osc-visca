#include <Ethernet.h>
#include <SPI.h>
#include <ArdOSC.h>
/************* Variables ****************/
byte mac[] = { 
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
byte ip[] = { 
  10, 0, 0, 10 };
byte destIp[]  = { 
  10, 0, 0, 4 };
int onebang = 0;
int serverPort = 10000;
int destPort=12000;
int incomingByte = 0;   // for incoming serial data
OSCServer server;
//create new osc message
OSCMessage global_mes;
OSCClient client;
uint8_t ViscaMsg[9] = {
  0x81,0x01,0x04,0x00,0x00,0x00,0x00,0x00,0xFF};
void setup()
{ 
  /************* Launch Serial Communication for visca commands ****************/
  Serial.begin(9600);
  /************* Launch ethernet server  ****************/
  Ethernet.begin(mac, ip);
  server.begin(serverPort);  
  /************* Add some osc messages ****************/
  server.addCallback("/visca/adressset",&ViscaAddressSet);
  server.addCallback("/visca/cancel",&ViscaCancel);
  server.addCallback("/visca/ifclear",&ViscaIfClear);
  server.addCallback("/visca",&ViscaForward);
}
void loop()
{ 
  /************* // Address Set Broadcast ****************/
  /* TODO
   if (onebang == 0) {
   ViscaAddressSet("/visca/adressset"auto/response);
   onebang = 1; 
   */
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
/************* Forward Visca Commands ****************/
void ViscaForward(OSCMessage *_mes) {
  ViscaMsg[6] = ((uint8_t) 0);
  ViscaMsg[7] = ((uint8_t) 0);
  ViscaMsg[8] = 0xFF;
  ViscaMsg[0] =_mes->getArgInt32(0);
  ViscaMsg[1] =_mes->getArgInt32(1);
  if (!ViscaMsg[1] == 0xFF) {
  Serial.write (ViscaMsg,2);
  }
  ViscaMsg[2] =_mes->getArgInt32(2);
  if (ViscaMsg[2] == 0xFF) {
  Serial.write (ViscaMsg,3);
  }
  ViscaMsg[3] =_mes->getArgInt32(3);
  if (ViscaMsg[3] == 0xFF) {
  Serial.write (ViscaMsg,4);
  }
  ViscaMsg[4] =_mes->getArgInt32(4);
  if (ViscaMsg[4] == 0xFF) {
  Serial.write (ViscaMsg,5);
  }
  ViscaMsg[5] =_mes->getArgInt32(5);
  if (ViscaMsg[5] == 0xFF) {
  Serial.write (ViscaMsg,6);
  }
  ViscaMsg[6] =_mes->getArgInt32(6);
  if (ViscaMsg[6] == 0xFF) {
  Serial.write (ViscaMsg,7);
  }
  ViscaMsg[7] =_mes->getArgInt32(7);
  if (ViscaMsg[7] == 0xFF) {
  Serial.write (ViscaMsg,8);
  }
  ViscaMsg[8] =_mes->getArgInt32(8);
  if (ViscaMsg[8] == 0xFF) {
  Serial.write (ViscaMsg,9);
  }
  Serial.write (ViscaMsg,9);
}

