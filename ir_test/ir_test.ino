

int ir=A0;
int led = 13;


void setup() {
  // put your setup code here, to run once:
pinMode( ir,INPUT);

pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead (ir));
if (analogRead (ir)<500)
digitalWrite(led,LOW);

else 
digitalWrite(led,HIGH);

}
