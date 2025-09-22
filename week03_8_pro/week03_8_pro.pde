// week03_8_processing_mouse_serial_write_space
import processing.serial.*;
Serial myPort;
void setup(){
  size(400, 400);
  myPort = new Serial(this, "COM5", 9600);
}
void mousePressed(){
  if(mouseButton==LEFT) myPort.write('b'); // 用
  if(mouseButton==RIGHT) myPort.write(' '); // 用
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
