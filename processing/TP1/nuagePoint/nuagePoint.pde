int a,b,c=0,d=0;
int i = 0;
void setup(){
size(800,500);}

void draw() {
  a = (int)random(800);
  b = (int)random(500);
  circle(a,b,10);
  line(a,b,c,d);
  c = a;
  d = b;
  i++;
  if(i<100);
}
