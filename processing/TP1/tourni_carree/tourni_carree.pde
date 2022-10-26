float angle;
float cote;
void setup() {
 size(800, 800);
 cote = 800;
 angle=0;
 rectMode(CENTER);
}
void draw() {
 translate(width/2, height/2);
 rotate(radians(angle));
 rect(0, 0, cote, cote);
 cote=cote*0.99;
 angle+=0.4;
 if (cote<0);
}
