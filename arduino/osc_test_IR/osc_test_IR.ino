#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCBundle.h>
#include <OSCBoards.h>
EthernetUDP Udp;
IPAddress ip(192, 168, 0, 111);
IPAddress OutIp(192, 168, 0, 4);
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;
byte mac[] = {0x90, 0xA2, 0xDA, 0x0D, 0x94, 0x73};
OSCBundle bundleOUT;
uint8_t ViscaShortMsg[5] = {0x81, 0x01, 0x06, 0x04, 0xFF};
uint8_t ViscaMsg[6] = {0x81, 0x01, 0x04, 0x00, 0x00, 0xFF};
uint8_t ViscaLongMsg[9] = {0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0x00, 0x00, 0xFF};
uint8_t ViscaMemMsg[7] = {0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0xFF};
char answer[999];   // for incoming serial data
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
               MessageIN.route("/power", power);
         }        
   }
/* **************************************************************** */
/* ***************Check Serial FEEDBACK FROM CAMERA***************** */
/* **************************************************************** */
//  if (Serial.available() > 0) {
//      int bytesRead;
//      if (Serial.available()) {  // when the serial port is available
//               bytesRead = Serial.readBytesUntil(255,answer,1024);
//               bundleOUT.add("/visca").add(answer); 
//               sendOSC();
//      }
//  }  
}


/* **************************************************************** */
/* ************************SEND****OSC***************************** */
/* **************************************************************** */
void sendOSC(){ 
        Udp.beginPacket(OutIp, outPort); 
        bundleOUT.send(Udp);
        Udp.endPacket();
        bundleOUT.empty();
}



/* **************************************************************** */
/* ************************POWER*********************************** */
/* **************************************************************** */
void power(OSCMessage &msg, int addrOffset ){
      if (msg.isInt(0)){        
        value = msg.getInt(0);
      } 
      else if(msg.isFloat(0)){
        value = msg.getFloat(0);
      }
  if ( value == 1 ) {
    ViscaMsg[4] =  0x02;
  } 
  else {
    ViscaMsg[4] =  0x03;
  } 
  Serial.write( ViscaMsg, sizeof(ViscaMsg) );
}
