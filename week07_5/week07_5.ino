// week07_5_arduino_analogWrite_rgb_led
void setup() {
  // RGB LED 最長的那根,是接地GND
  pinMode(3, OUTPUT); // 接最左邊的紅色
  pinMode(6, OUTPUT); // 藍色
  pinMode(5, OUTPUT); // 綠色
  
}

void loop() {
  analogWrite(6,0);//藍色關掉
  analogWrite(3,255); // 亮的程度，是 a 的值
  delay(500); // 每 0.01 秒
  analogWrite(3,0);
  analogWrite(5,255);
  delay(500);
  analogWrite(5,0);
  analogWrite(6,255);
  delay(500);
}