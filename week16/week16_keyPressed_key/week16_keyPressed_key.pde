void setup(){//設定
  size(300,300);
}
String line = "";
void draw(){//畫圖60秒/秒
  background(#FFFFF2);
  fill(0);
  textSize(50);
  text(line,20,50);
}
void keyPressed(){//按鍵
  line = "key: " + key;
}
