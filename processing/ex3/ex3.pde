/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 3                        #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 31 03 2023                    ####      #      #  ##   #      */
/* UPDATE  : 31 03 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */
void setup() {
  size(600,600);
  background(255);
  draw(200,200,200);
 
}

void draw(int x , int y , int l) {
  if (l < 1) return;
  fill(0,0,0);
  rect(x,y,l,l);

  draw(x-2 * l/3, y - 2 * l/3 , l/3);
  draw(x+l/3 , y - 2 * l/3,l/3);
  draw(x+l+l/3,y-2*l/3,l/3);
  draw(x-2 * l/3 , y  +l/3, l/3);
  draw(x + l+l/3, y+l/3,l/3);
  draw(x-2*l/3,y+l+l/3,l/3);
  draw(x+l/3,y+l+l/3,l/3);
  draw(x+l+l/3,y+l+l/3,l/3);
}
 
 
