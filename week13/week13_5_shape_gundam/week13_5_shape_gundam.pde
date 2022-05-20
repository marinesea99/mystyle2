PShape gundam;//等一下要用的鋼彈模型
void setup(){ //P語言其實是Java的變形(方言)
  size(500,500,P3D);//有P語言的3D功能
  gundam = loadShape("Gundam.obj");
}          //讀入模型,很像今天教的loadImage()
void draw(){
  background(#3BC1AA);
  //這個模型太小了,等一下要把它放大
  translate(250,0,0);//往右移一半
  scale(20,20,20);//放大20倍,看起來像倒過來
  //因為建3D模型時,Y軸向上,小畫家/P語言/圖片
  shape(gundam);//秀出模型,像今天教的image()
}//Q:模型 Gundam.obj 在哪裡?
