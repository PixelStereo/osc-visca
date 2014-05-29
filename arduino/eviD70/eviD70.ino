#include <Ethernet.h>
#include <EthernetUdp.h>
#include <SPI.h>    
#include <OSCBundle.h>
#include <OSCBoards.h>
EthernetUDP Udp;
IPAddress ip(192, 168, 0, 111);
IPAddress OutIp(192, 168, 0, 2);
const unsigned int inPort = 8888;
const unsigned int outPort = 9999;
byte mac[] = {0x90, 0xA2, 0xDA, 0x0D, 0x94, 0x73};
OSCBundle bundleOUT;
uint8_t ViscaMsg[6] = {0x81, 0x01, 0x04, 0x00, 0x00, 0xFF};
uint8_t ViscaLongMsg[9] = {0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0x00, 0x00, 0xFF};
uint8_t ViscaMemMsg[7] = {0x81, 0x01, 0x04, 0x47, 0x00, 0x00, 0xFF};
int incomingByte = 0;   // for incoming serial data
int value;

/************* Power ****************/
void power(OSCMessage &msg, int addrOffset ){
      if (msg.isInt(0)){        
        value = msg.getInt(0);
      } //otherwise it's a floating point frequency in Hz
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
  
/************* ZOOM  ****************/  
void zoom(OSCMessage &msg, int addrOffset ){
    int Matched;
    Matched = msg.match("/stop", addrOffset);
    if(Matched){   
        ViscaMsg[3] =  0x07;
        ViscaMsg[4] = ((uint8_t) 0);
        Serial.write( ViscaMsg, sizeof(ViscaMsg) );    
         }
    }

void setup() {
/************* Launch ethernet server  ****************/
  Ethernet.begin(mac,ip);
  Udp.begin(inPort);
/************* Launch Serial Communication for visca commands ****************/
  Serial.begin(9600);
  delay(1000);
  Serial.write(0x88);
  Serial.write(0x30);
  Serial.write(0x01);
  Serial.write(0xFF); 
}

void loop(){ 
    OSCMessage bundleIN;
   int size;
 
   if( (size = Udp.parsePacket())>0)
   {
         while(size--)
           bundleIN.fill(Udp.read());
        if(!bundleIN.hasError())
              bundleIN.route("/zoom", zoom);
              bundleIN.route("/power", power);
   }
              
  /************* // Check Serial messages for loopback ****************/
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
  /************* // Send Serial messages to OSC ****************/
        bundleOUT.add("/visca/from").add((uint8_t*)incomingByte); 
       sendOSC(); 
  }            
}
void sendOSC(){ 

  // send the response bundle back to where the request came from
        Udp.beginPacket(OutIp, outPort); 
        bundleOUT.send(Udp);
        Udp.endPacket();
        bundleOUT.empty(); // empty the bundle ready to use for new messages
}
