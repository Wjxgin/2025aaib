///week15_3_zongzi_PImage_image_falling_part1
PImage zongzi;//模仿week10
void setup(){
  size(600, 400);//模仿week14
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER);
}//要把圖檔zongzi.png先拉到程式裡
float x, y;
void draw(){
  background(#C0ffee);//模仿week14
  image(zongzi, 100, 100, 120, 100);
  y++;
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
