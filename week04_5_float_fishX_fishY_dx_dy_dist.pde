///week04-5-float-fishX-fishY-dx-dy-dist
void setup(){
  size(600,400);
}
int x, y;
float fishX = 300, fishY = 200;
void draw(){
  background(#C0ffee);//裡面是0，不是字母O
  ellipse(fishX, fishY, 30, 10);
  if(x>0){
    y +=2;
    if(y>400) x = 0;//超過畫面範圍，就把X變成0
    ellipse(x, y, 8, 8);
    float dx = x - fishX, dy = y - fishY;
    float d = dist(x, y, fishX, fishY);
    fishX += dx / d * 4;
    fishY += dx / d * 4;
  }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
