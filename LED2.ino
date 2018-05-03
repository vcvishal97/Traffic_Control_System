int IRsensor1 = 10;
int IRsensor2 = 11;
int redLEDpin1 = 7;
int redLEDpin2 = 2;
int greenLEDpin1 = 6;
int greenLEDpin2 = 3;


void setup() {
  // put your setup code here, to run once:
pinMode(IRsensor1, INPUT);
pinMode(IRsensor2, INPUT);

pinMode(redLEDpin1, OUTPUT);
pinMode(greenLEDpin1, OUTPUT);
pinMode(redLEDpin2, OUTPUT);
pinMode(greenLEDpin2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(IRsensor1)==HIGH and digitalRead(IRsensor2)==HIGH)
{
  digitalWrite(greenLEDpin1, LOW);
  digitalWrite(greenLEDpin2, LOW);
  digitalWrite(redLEDpin1, HIGH);
  digitalWrite(redLEDpin2, HIGH);

  delay(1000);
  
  digitalWrite(redLEDpin1, LOW);
  digitalWrite(greenLEDpin1, HIGH);
  delay(3000);
  digitalWrite(greenLEDpin1, LOW);
  digitalWrite(redLEDpin1, HIGH);

  digitalWrite(redLEDpin2, HIGH);
  delay(1000);

  digitalWrite(redLEDpin2, LOW);
  digitalWrite(greenLEDpin2, HIGH);
  delay(3000);
  digitalWrite(greenLEDpin2, LOW);
  digitalWrite(redLEDpin2, HIGH);
}

else
{
  if(digitalRead(IRsensor1)==HIGH)
  {
    digitalWrite(greenLEDpin1, HIGH);
    digitalWrite(redLEDpin1, LOW);
  }
  else
  {
    digitalWrite(greenLEDpin1, LOW);
    digitalWrite(redLEDpin1, HIGH);
  }
  
  if(digitalRead(IRsensor2)==HIGH)
  {
    digitalWrite(greenLEDpin2, HIGH);
    digitalWrite(redLEDpin2, LOW);
  }
  else
  {
    digitalWrite(redLEDpin2, HIGH);
    digitalWrite(greenLEDpin2, LOW);
  }

}
}

