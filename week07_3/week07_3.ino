// week07_3_arduino_blink_blink_blink
// 有一支腳要接地GND,另一支要接 13
// 有一支腳要接地GND,另一支要接 12
// 有一支腳要接地GND,另一支要接 11 
// 有一支腳要接地GND,另一支要接 10 
void setup() {
  pinMode(10, OUTPUT); // (多這一行)
  pinMode(11, OUTPUT); // (多這一行)
  pinMode(12, OUTPUT); // 把第12支腳,能送出資料 OUTPUT
  pinMode(13, OUTPUT); // 把第13支腳,能送出資料 OUTPUT
}

void loop() {
  for(int i=10; i<=13; i++) {
    digitalWrite(i-1, LOW); // 熄滅 (多這一行)
    digitalWrite(i, HIGH); // 發亮
    digitalWrite(i+1, LOW); // 熄滅 (多這一行)
    delay(500);
  }
}