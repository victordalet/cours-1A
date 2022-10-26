size(1000,800);
int x = 500;
int y = 400;
for (int i = 1 ; i<20 ; i++){
  line(x,y,x+20*i,y);
  x += 20*i;
  line(x,y,x,y+20*i);
  y += 20*i;
  i++;
  line(x,y,x-20*i,y);
  x -=20*i;
  line(x,y,x,y-20*i);
  y -= 20*i;
}
