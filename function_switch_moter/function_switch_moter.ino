int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;
int sw1 = 16;
int sw2 = 14;
void setup() {
pinMode(bt,OUTPUT);
pinMode(wifi,OUTPUT);
pinMode(ntp,OUTPUT);
pinMode(iot,OUTPUT);
pinMode(sw1,INPUT_PULLUP);
pinMode(sw2,INPUT_PULLUP);
}

void loop() {
  
if(digitalRead(sw1)==LOW){
  forward();
}else{
  stop3();
}
if(digitalRead(sw2)==LOW){
  backward();
}else{
  stop3();
}
 
}
void forward(){
  digitalWrite(bt,LOW);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,LOW);
  digitalWrite(iot,HIGH); 

}
void backward(){
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,LOW);
  digitalWrite(ntp,HIGH);
  digitalWrite(iot,LOW); 
}


void stop3(){ //1111
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,HIGH);
  digitalWrite(iot,HIGH);
}
