/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX WRITE CODE 5             #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 05 04 2023                    ####      #      #  ##   #      */
/* UPDATE  : 05 04 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

void setup() {
 int[] tab = new int[2];
  print(add(tab,5));
}



ArrayList add(int []tab , int val){

  ArrayList<Integer>lst = new ArrayList<>();
  for (int i = 0; i < tab.length ; i++) {
    lst.add(tab[i]);
  } 
  lst.add(val);
  print(lst);
  return lst;
  
}
