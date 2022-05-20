void setup(){
   size(400,300);
   textSize(40);
}
// -1:沒選,0:Choice 1
int choice=-1;
void draw(){
    background(#8B5151);
    fill(#FFFFFF);
    if (choice == 0) ellipse(25, 25, 40, 40);
    if (choice == 1) ellipse(25, 75, 40, 40);
    if (choice == 2) ellipse(25,125, 40, 40);
    text("Choice 1", 50,  50);
    text("Choice 2", 50, 100);
    text("Choice 3", 50, 150);
}
void mousePressed() {
    // choice=(choice + 1)%3;
    choice = int(random(3));
}
