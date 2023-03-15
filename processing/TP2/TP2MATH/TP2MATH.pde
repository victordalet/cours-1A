void setup() {
  println(decompFPV2(90));
  decompFV3(90);
}
int[] decompFPV2(int n) {
  int tab[] = new int[n] ;
  int a = 0;
  for (int i = 2 ; n>1 ; i++) {
    for (int j = i ; n%j == 0 ; j++) {
       if (n%j == 0) {
         n/=j;
         tab[a] = j;
         a++;
       }
    }
  }
  return tab;
}

void decompFV3(int n) {
  int tab[] = new int[n] ;
  int a = 0;
  for (int i = 2 ; n>1 ; i++) {
    for (int j = i ; n%j == 0 ; j++) {
       if (n%j == 0) {
         n/=j;
         tab[a] = j;
         a++;
       }
    }
  }
  for (int i = 0 ; i < tab.length ; i++) {
    if (tab[i]!=0){
      println(tab[i]);
      println("^");
      for (int j = 0 ; tab[i] == tab[i+j] ; j++) {
        if (tab[i] == tab[i+j]) {
          println(j+1);
          i += j;
        }
      }
    }
  }
}
 
int[] erato(int n) {
  int[] tab = new int[n+1];
  for (int i = 0; i<=n; i++) {
    tab[i]=i;
  }
  tab[1]=0;
  for (int i = 2; i<=n; i++) {
    for (int j = 2; i*j<=n; j++) {
      if (tab[i]!=0)tab[i*j]=0;
    }
  }
 
  int taille=0;
  for (int i = 0; i<=n; i++) {
    if (tab[i]!=0)taille++;
  }
  int[] res=new int[taille];
  int k = 0;
  for (int i = 0; i<=n; i++) {
    if (tab[i]!=0) {
      res[k]=tab[i];
      k++;
    }
  }
  return res;
}
