//week12_1_happy_bubble_3D_part3
//用mousePressed按下去，要對應陣列 再來畫
void setup(){
  size(300,300,P3D);
}
int[][] state = new int[6][6];//state
void draw(){
  background(255,255,0);//黃色背景
  ortho();//垂直投影(就會全部正正的)
  lights();//打光，可讓3D模型更立體
  noStroke();//不要有線
  fill(#FF8BEA);//球是粉色的
  
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      pushMatrix();
      translate(25+j*52, 25+i*50);
      if(state[i][j]==0)sphere(23);//沒按
      else sphere(10);//有按
      popMatrix();
    }
  }
}
void mousePressed(){
  int j = (mouseX-25)/50, i =(mouseY-25)/50;
  state[i][j] = 1;
}
