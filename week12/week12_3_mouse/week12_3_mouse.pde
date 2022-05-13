void setup(){//要互動,要有2個函式:setup()設定
  size(300,300);
  textSize(40);//文字的大小,40號字
}
void draw(){//要互動,要有2個函式:draw()畫
  background(#77D6A2);
  fill(#FFFFFF);//字的填充顏色
  text("Hello",mouseX,mouseY);//秀文字,在50,100
}
