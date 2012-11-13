//byte cam_pow_inq[] ={0x81, 0x01, 0x04, 0x07, 0x03, 0xFF, 0x0D};
byte Address[] ={0x88, 0x30, 0x01, 0xFF};
void setup()
{
  Serial.begin(9600);
  Serial.println("\r\n======Start======");
  Serial.write(Address[0]);
  Serial.write(Address[1]);
  Serial.write(Address[2]);
  Serial.write(Address[3]);
}

void loop()
{
   if(Serial.available()){
    char c = Serial.read();
    Serial.print(c, HEX);
    Serial.print(" ");
  } 
}
