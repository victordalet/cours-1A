/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 2.5                      #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 31 03 2023                    ####      #      #  ##   #      */
/* UPDATE  : 31 03 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

void setup() {
  size(500,500);
  background(255,255,0);
  stroke(200,0,200);          
  fill(255,255,0); 
  draw(10,10,0);
}

void draw(int a, int b,int c ){
  
  if (a+b != 0) {
    
     /*--------------------INIT-----------------------*/
    
     int x = 200;
     int y = 50;
     int width_rect = 20;
    
     
     
     /*--------------------DRAW RECT-----------------------*/
    
     rect(x+width_rect,y+(width_rect - a - b) * width_rect,width_rect,width_rect);
     
     /*--------------------RANDOM CIRCLE-----------------------*/
     
     int r  = (int) random(2);
     
     r++;
     if (r == 1 && a == 0) {
       r = 2;
     }
     else if (r == 2 && b == 0) {
       r = 1;
     }
     
     /*--------------------DRAW CIRCLE-----------------------*/
     
     if (r==2) {
       r = 3;
     }
   
     circle(x-10+width_rect*r,y+10+(width_rect - a - b) * width_rect,width_rect);
     
     
     /*--------------------DRAW LINE-----------------------*/
     if (a+b != 20) {
     
       if ((r == 3 && c == 1) || r==1 && c == 0){
         line(x-10+width_rect*r,y+10+(width_rect - a - b) * width_rect,x-10+width_rect*r,y+10-width_rect+(width_rect - a - b) * width_rect);
       }
       else if (r == 3) {
         line(x-10+width_rect*r,y+10+(width_rect - a - b) * width_rect,x+10-(width_rect*3)+width_rect*r,y+10-width_rect+(width_rect - a - b) * width_rect);
       }
       else {
         line(x-10+width_rect*r,y+10+(width_rect - a - b) * width_rect,x-10+(width_rect*2)+width_rect*r,y+10-width_rect+(width_rect - a - b) * width_rect);
       }
       
     }
     
     
     /*--------------------RECU-----------------------*/
     
     
     if (r == 1) {
      draw(a-1,b,0);
     }
     else {
      draw(a,b-1,1);
     }
  }
  
}
 
