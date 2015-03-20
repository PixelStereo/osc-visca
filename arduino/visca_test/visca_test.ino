#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCMessage.h>
#include <OSCBundle.h>
#include <OSCBoards.h>
EthernetUDP Udp;
IPAddress ip(192, 168, 0, 111);
IPAddress OutIp(192, 168, 0, 4);
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;
byte mac[] = {
  0x90, 0xA2, 0xDA, 0x0D, 0x94, 0x73};
OSCBundle MessageOUT;
uint8_t ViscaMsg[6] = {
  0x81, 0x01, 0x04, 0x00, 0x00, 0xFF};
byte answer[1024];   // for incoming serial data
int value;
int Matched;
/* ************************ SET UP ******************************** */
void setup() {
  /* ************ Launch ethernet server  *************************** */
  Ethernet.begin(mac,ip);
  Udp.begin(inPort);
  /********** Launch Serial Communication for visca commands ******** */
  Serial.begin(9600);
  MessageOUT.add("/alive !!");     
  sendOSC();
}
/* ************************ END SET UP ******************************** */
/* **************************************************************** */
/* *********************** THE LOOP ******************************* */
void loop(){ 
  /* *************** UDP MESSAGES COMING OVER OSC******************** */
  OSCMessage MessageIN;
  int size;
  if( (size = Udp.parsePacket())>0)
  {
    while(size--)
      MessageIN.fill(Udp.read());
    if(!MessageIN.hasError()) {
      MessageIN.route("/active", power);
    }
  }      
}
/* *********************** SEND OSC ******************************* */
void sendOSC(){ 
  Udp.beginPacket(OutIp, outPort); 
  MessageOUT.send(Udp);
  Udp.endPacket();
  MessageOUT.empty();
}
/* ******************* GETVALUE (FLOAT OR INT ********************* */
void getValue(OSCMessage &msg, int addrOffset){ 
  if (msg.isInt(0)){      
    value = msg.getInt(0);
  } 
  else if(msg.isFloat(0)){
    value = msg.getFloat(0);
  }
}
/* ************************POWER*********************************** */
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
  int sizeofmsg = sizeof(ViscaMsg);
  Serial.write(ViscaMsg,sizeofmsg);
/*  for (int i=0; i < sizeof(ViscaMsg); i++) { 
    Serial.write((int)ViscaMsg[i]);
  }*/
}


