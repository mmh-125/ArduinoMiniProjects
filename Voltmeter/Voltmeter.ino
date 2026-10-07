//Connect the Wire Leads(Connected to A0 and A1) across a resistor and use Serial Monitor to find the Potential Difference across it.

int Positive = A0;
int Negative = A1;
float Voltage =0;
float Actual = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Positive, INPUT);
  pinMode(Negative,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Voltage = analogRead(Positive) - analogRead(Negative);
  Actual = abs((5./1023.) *Voltage);
  
  
  Serial.println(Actual);
  delay(1000);
}
