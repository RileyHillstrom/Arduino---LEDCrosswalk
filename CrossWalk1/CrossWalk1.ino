
  int PinD3 =  3;
  int PinD9 =  9;
  int i;
  
void setup() {

    // set the digital pin as output:
  pinMode(PinD3, OUTPUT);
  pinMode(PinD9, OUTPUT);
}



void loop() {
  while (i<10)
    {

    digitalWrite(PinD3, HIGH);
    delay(900);
    digitalWrite(PinD3, LOW);
    delay(900);
    i++;
    }
  digitalWrite(PinD3, HIGH);
  delay(10000);
  digitalWrite(PinD3, LOW);
  delay(500);
  digitalWrite(PinD9, HIGH);
  delay(20000);
  digitalWrite(PinD9, LOW);
  delay(100);
  i=0;
  

}
