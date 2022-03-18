int inpin=A0;
int val;

void setup() {
  pinMode(inpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(val, HEX);
  val=analogRead(inpin);
  delay(250);
}
