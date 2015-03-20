#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCMessage.h>
#include <OSCBundle.h>
#include <OSCBoards.h>
EthernetUDP Udp;
IPAddress ip(192, 168, 0, 111);
IPAddress OutIp(192, 168, 0, 29);
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;
byte mac[] = {
  0x90, 0xA2, 0xDA, 0x0D, 0x94, 0x73};
OSCBundle MessageOUT;
uint8_t ViscaMsg[6] = {
  0x81, 0x01, 0x04, 0x00, 0x03, 0xFF};
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
  MessageOUT.add("/alive !!");     
  sendOSC();
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


/* **************************************************************** */
/* ************************POWER*********************************** */
/* **************************************************************** */
void power(OSCMessage &msg, int addrOffset ){
  value = msg.getInt(0);
  if ( value == 1 ) {
    ViscaMsg[4] = 0x03;
  }
  else { 
    ViscaMsg[4] = 0x02;
  }
  MessageOUT.add("/power").add(value);     
  sendOSC();
  delay(100);
  MessageOUT.add("/taille").add(sizeof(ViscaMsg));     
  sendOSC();
  delay(100);
  // using an int and a base (hexadecimal):
  String stringOne =  String(45, HEX);   
  // prints "2d", which is the hexadecimal version of decimal 45:
  Serial.println(stringOne); 
  //Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}




