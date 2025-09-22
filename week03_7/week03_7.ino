// week03_7
void setup() {
  Serial.begin(9600); // 設定USB傳輸速度
  pinMode(8, OUTPUT); 
}

void serialEvent() { // 等待 USB 的事件
  while (Serial.available()) { 
    Serial.read();
    tone(8, 800, 200);
  }
}

void loop() {
  
}