#include <SPI.h>
#include <Ethernet.h>
 
// ethernet
byte mac[] = { 0x90, 0xA2, 0xDA, 0x0D, 0x3C, 0x56 };
byte ip[] = { 192, 168,0, 111}; 
// socket parameters
int serverPort = 8888;
// start TCP servers
EthernetServer server(serverPort);
 
void setup() {
  Serial.begin(9600); // open serial communications
  Ethernet.begin(mac, ip); // start the Ethernet connection
  server.begin(); // begin listening for TCP connections
  Serial.println(Ethernet.localIP());
}
 
void loop() {
  // listen for incoming clients
  EthernetClient client = server.available();
  if (client) {
    String clientMsg ="";
    while (client.connected()) {
      // transmit
      while (client.available()) {
        char c = client.read();
        clientMsg+=c; // store received chars up to newline
        if (c == '\n') {
          Serial.print(clientMsg); // then send the message through serial
          clientMsg = "";
          serial.flush();
        }
      }
 
      // receive
      int incomingByte = 0; // for incoming serial data
      while (Serial.available() > 0) { // if data has been received from the serial connection
        incomingByte = Serial.read();
        client.print(char(incomingByte)); // print the char data back to the client
        if (char(incomingByte) == '\n')
           client.flush();
      }
    }
  }
}
