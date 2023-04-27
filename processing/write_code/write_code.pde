/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX WRITE CODE               #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 05 04 2023                    ####      #      #  ##   #      */
/* UPDATE  : 05 04 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

void setup() {

  println(ecrireCheckN(10));
} 
String ecrireCheckN(int n) {
  String res="";
  res += "void setup() {check("+n+");}\n";
  res += codeAd(n);
  String[] t={res}; 
  saveStrings("../check"+n+"/check"+n+".pde", t);
  return res;
}

String codeAd(int n) {
  String res ="";
  res+="void check(int n) {\n";
  res+="int [] tab = new int [n];\n";
  for (int  i = 0 ; i < n ; i++) {
  res+="  for (tab["+i+"] = 0; tab["+i+"]<tab.length; tab["+i+"]++) {\n";
  }
  res += "if (ok(tab))println(tab);\n"; 
  for (int  i = 0 ; i < n ; i++) {
  res+="}\n";
  }
  res+="}";

  return res;
}
