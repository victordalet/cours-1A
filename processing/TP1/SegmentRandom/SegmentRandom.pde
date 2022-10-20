int x, i, y;
size(500, 400);
for ( i=0; i<40; i++) {
 stroke(random(255),random(255),random(255));
 x = (int)random(500);
 y= (int)random(400);
 line(random(500), random(400), x, y);
}
