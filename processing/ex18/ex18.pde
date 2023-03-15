void setup() {
  int[] tab = {3,4,-2};
  println(sousTabMax(tab));
}

int[] sousTabMax(int[] tab) {
  int somme = 0;
  int somme_max = 0;
  int[] little_tab =  new int[tab.length];
  int[] little_tab_max =  new int[tab.length];
  for (int i =0; i < tab.length ; i++) {
    for (int j = 0 ; j < i ; j++) {
      somme += tab[j];
      little_tab[j] = tab[j];
    }
    if (somme > somme_max){
      somme_max = somme;
      for (int j = 0 ; j < tab.length ; j++) {
         little_tab_max[j] = little_tab[j];
       }
    }
    somme = 0;
    for (int j = 0 ; j < little_tab.length ; j++) {
      little_tab[j] = 0;
    }
  }
  return little_tab_max;
}
