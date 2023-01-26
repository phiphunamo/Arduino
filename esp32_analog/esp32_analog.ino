int iot = 12;
void setup() {
pinMode(iot,OUTPUT);
}

void loop() {
for(int i=255;i>0;--){
analogWrite(iot,i);
delay(10);
}
}
