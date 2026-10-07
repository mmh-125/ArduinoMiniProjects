int Led = 3;
int del = 50; //0.1 s
int Between = 2000;

// using analogwrite to make an LED go from dim to bright
void setup() {
  // put your setup code here, to run once:
  pinMode(Led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int myswitch = 0; myswitch <=255; myswitch = myswitch+1){
  analogWrite(Led,myswitch);
  delay(del);
  }
  delay(Between);

}
