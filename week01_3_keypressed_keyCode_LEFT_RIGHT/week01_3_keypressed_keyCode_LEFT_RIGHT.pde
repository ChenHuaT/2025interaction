//week01_3_keypressed_keyCode_LEFT_RIGHT
void setup(){
  size(500, 500);
}
int x = 200, y = 200;
void draw(){
  background(#FFFFAA);
  rect(x,y,100,50);
  if(keyPressed && keyCode==LEFT) x-=3;
  if(keyPressed && keyCode==RIGHT) x+=3;
}
