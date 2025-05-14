//week13_5_sound
//要先安裝音樂函式庫
//找sound下載sound的函式點Install安裝完
//播放音樂
import processing.sound.*;  //使用聲音外掛
SoundFile mySound, monkey, sword;//
void setup(){
  size(400,400);//視窗大小400x400 小心，檔名的空白
  //記得要先把音樂檔"Intro Sound_Final.mp3"拉到程式裡
  monkey = new SoundFile(this, "Monkey 1.mp3");
  sword = new SoundFile(this, "sword slash.mp3");
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();//在播放剛剛讀入的聲音檔
}
void mousePressed(){
  if(mouseButton==LEFT)monkey.play();
  if(mouseButton==RIGHT)sword.play();
}
void draw(){
  
}//裡面是空的畫圖，要寫它
