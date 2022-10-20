size(800,500);
int a,b,c=0,d=0
;
for (int i = 0 ; i < 100 ; i++) {
  a = (int)random(800);
  b = (int)random(500);
  circle(a,b,10);
  line(a,b,c,d);
  c = a;
  d = b;
}
