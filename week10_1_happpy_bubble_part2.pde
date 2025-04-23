//week10_1_happpy_bubble_part2
PImage toy1, toy2, toy3;//變數宣告
//int a, b;很像之前教過的int整數宣告
void setup(){
  size(400,495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1);//把第1張圖當背景，長寬要相同
  if(mousePressed && toy3 !=null)image(toy3, mouseX-25, mouseY-25);
}
void mousePressed(){
  toy3 = toy2.get(mouseX-25, mouseY-25, 50, 50);
}
