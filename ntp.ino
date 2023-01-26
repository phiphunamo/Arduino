void ntpblink(int value){
digitalWrite(ntp,LOW);
delay(value);
digitalWrite(ntp,HIGH);
delay(value);
}
