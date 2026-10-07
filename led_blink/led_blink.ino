//Blinking LEDS to spell MMH in Morse Code
int GreenLed = 7;
int BlueLed = 4;
int RedLed = 2;
int Unit = 250;
int Dash = Unit * 3;


void setup() {
  // put your setup code here, to run once:
  pinMode(GreenLed, OUTPUT);
  pinMode(BlueLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:


  for (int i =1; i <=2 ; i++){
  digitalWrite(GreenLed,HIGH);
  delay(Dash);
  digitalWrite(GreenLed,LOW);
  delay(Unit);}

   for (int i =1; i <=2 ; i++){
  digitalWrite(BlueLed,HIGH);
  delay(Dash);
  digitalWrite(BlueLed,LOW);
  delay(Unit);}

  for (int i = 1; i <=4; i++){
    digitalWrite(RedLed,HIGH);
    delay(Unit);
    digitalWrite(RedLed, LOW);
    delay(Unit);

  }

  


}
