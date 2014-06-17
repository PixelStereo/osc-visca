#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCMessage.h>
#include <OSCBundle.h>
#include <OSCBoards.h>
EthernetUDP Udp;
IPAddress ip(10, 0, 0, 111);
IPAddress OutIp(10, 0, 0, 4);
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;
byte mac[] = {0x90, 0xA2, 0xDA, 0x0D, 0x94, 0x73};
OSCBundle bundleOUT;
uint8_t ViscaMsg[6] = {0x81, 0x01, 0x04, 0x00, 0x03, 0xFF};
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


/* **************************************************************** */
/* ************************POWER*********************************** */
/* **************************************************************** */
void power(OSCMessage &msg, int addrOffset ){
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
