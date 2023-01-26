int iot = 12 ;
void setup() {
pinMode(iot,OUTPUT);
}

void loop() {
int x  = 3;
do{
  digitalWrite(iot,LOW);
  delay(3000);
  digitalWrite(iot,HIGH);
  delay(3000);
     x++;
 }while(x <= 10);
}
