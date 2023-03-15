void printTab2indices(int[][] tab){
  
  for (int i = 0 ; i < tab.length ; i++) {
    for (int j = 0 ; j < tab.length ; j++) {
      print(tab[i][j]);
    }
  }

}

int[][] buildDiagCartesien(int[] tab) {
  int tab2[][] = new int[tab.length][tab.length];
  for (int i = 0 ; i < tab.length ; i++) {
    for (int j = 0 ; j < tab.length ; j++) {
      if (tab[j] % tab[i] == 0){
        tab2[i][j] = 1;
      }
    }
  }
  return tab2;
}


int[][] ordre2Hasse(int[][] tab){
  
}
