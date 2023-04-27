/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX WRITE CODE 2             #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 05 04 2023                    ####      #      #  ##   #      */
/* UPDATE  : 05 04 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


void setup(){
int n = 3;
int[] tab = new int[n];
nUplets(tab, 0);
}
void nUplets(int [] tab, int ind) {
 if (tab.length == ind) {
    for (int i = 0 ; i < tab.length ; i++) {
    print(tab[i]);
  }
 return;
 } 
 tab[ind]=0;
 nUplets(tab, ind+1);
 tab[ind]=1;
 nUplets(tab, ind+1);
 
}
