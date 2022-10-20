size(500,400);
int x = 10;
int y = 10;
for (int i = 0 ; i < 10 ; i++) {
  if (random(1)<0.5) {
    line(x,y,x+50,y);
    x +=50;
   } else {
    line(x,y,x,y+50);
    y += 50;
   }
   circle(x,y,10);
}
