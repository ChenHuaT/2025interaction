//week07_1_arduion_blink
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH); // 發亮
  delay(500);
  digitalWrite(13,LOW); // 暗掉
  delay(500);
}
