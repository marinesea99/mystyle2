void setup(){//設定
  size(300,300);
}
int x=150, y=150; //座標
void draw(){//畫圖60秒/秒
  background(#FFFFF2);
  ellipse(x,y,30,30);//圓
}
void keyPressed(){//按鍵
  if(key == 'w') y-=2;
  if(key == 's') y+=2;
  if(key == 'a') x-=2;
  if(key == 'd') x+=2;
}
