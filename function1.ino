int iot = 12;
int ntp = 15;
int wifi = 2;
int bt =  17;
void setup() {
pinMode(iot,OUTPUT);
pinMode(ntp,OUTPUT);
pinMode(wifi,OUTPUT);
pinMode(bt,OUTPUT);
}

void loop() {
iotblink();
ntpblink(100);
wifiblink(1000,500);
digitalWrite(bt,LOW);
delay(btblink(10));
digitalWrite(bt,HIGH);
delay(btblink(10));
}
