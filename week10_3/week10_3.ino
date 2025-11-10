// week10_3
//把 joystick 的Y的線,經由麵包板幫忙 接到 MakerUNO pin 3

void setup() {
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT); // 發出聲音

}

void loop() {
  int now = analogRead(A3);
  if (now > 800){ // 比較高的聲音
    tone(8,523,100); // 發出 523 的 DO
    delay(100);
    tone(8,784,100); // 發出 784 的 SO
    delay(200);
  }else if ( now < 200){
    tone(8,784,100); // 發出 523 的 DO
    delay(100);
    tone(8,523,100); // 發出 784 的 SO
    delay(200);
  }
}
