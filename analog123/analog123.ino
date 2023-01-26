int ntp = 15;
int ldr = 36;
void setup() {
Serial.begin(9600);
pinMode(ntp,OUTPUT);
pinMode(ldr,INPUT);
}


void loop() {
 int value1=analogRead(ldr);
 //Serial.println(value1);
 Serial.println(analogRead(ldr));
 digitalWrite(ntp,value1);
}
