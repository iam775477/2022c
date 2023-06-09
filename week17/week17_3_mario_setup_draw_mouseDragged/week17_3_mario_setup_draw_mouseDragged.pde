PImage BUZZ, ironman;
void setup(){
  size(800,900);
  BUZZ = loadImage("BUZZ.jpg");
  ironman = loadImage("ironman.png");
}
void draw(){
  background(255);
  image(ironman, 0, 80, 250,300);
  image(BUZZ, x, y); 
}
float x = 300, y = 0; 
void mouseDragged(){
  x += (mouseX-pmouseX); 
  y += (mouseY-pmouseY); 
}
