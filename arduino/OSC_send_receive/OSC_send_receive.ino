#include <OSCMessage.h>
#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCBundle.h>
#include <OSCBoards.h>

//UDP communication


EthernetUDP Udp;
byte mac[] = {  
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED }; // you can find this written on the board of some Arduino Ethernets or shields

//the Arduino's IP
IPAddress ip(192, 168, 0, 111);
//the destination IP
IPAddress outIp(192, 168, 0, 145);

//port numbers
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;


void setup() {
  //setup ethernet part
  Ethernet.begin(mac,ip);
  Udp.begin(inPort);

}
//reads and dispatches the incoming message
void loop(){ 
  
    //the message wants an OSC address as first argument
  OSCMessage msg("/analog/0");
  msg.add((int32_t)analogRead(0));
  
  Udp.beginPacket(outIp, outPort);
    msg.send(Udp); // send the bytes to the SLIP stream
  Udp.endPacket(); // mark the end of the OSC Packet
  msg.empty(); // free space occupied by message

  delay(10);
}


