int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;
int ldr = 36;
void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(bt, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, HIGH);

}

void loop() {
  int val = map(analogRead(ldr), 600, 900, 1, 4);
  if (val == 1) {
    digitalWrite(bt, LOW);
    digitalWrite(wifi, HIGH);
    digitalWrite(ntp, HIGH);
    digitalWrite(iot, HIGH);
  } else if (val == 2) {
    digitalWrite(bt, HIGH);
    digitalWrite(wifi, LOW);
    digitalWrite(ntp, HIGH);
    digitalWrite(iot, HIGH);
  } else if (val == 3) {
    digitalWrite(bt, HIGH);
    digitalWrite(wifi, HIGH);
    digitalWrite(ntp, LOW);
    digitalWrite(iot, HIGH);
  } else if (val == 4) {
    digitalWrite(bt, HIGH);
    digitalWrite(wifi, HIGH);
    digitalWrite(ntp, HIGH);
    digitalWrite(iot, LOW);
    } else if (val == 5) {
    digitalWrite(bt, LOW);
    digitalWrite(wifi, LOW);
    digitalWrite(ntp, LOW);
    digitalWrite(iot, LOW);
  } else {
    digitalWrite(bt, HIGH);
    digitalWrite(wifi, HIGH);
    digitalWrite(ntp, HIGH);
    digitalWrite(iot, HIGH);

  }
}
