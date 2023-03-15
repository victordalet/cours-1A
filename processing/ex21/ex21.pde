void setup() {
   char[] word1 = {'c','r','o','t','a','l'};
   char[] word2 = {'h','i','p','p','o','p','o','t','a','m'};
   println(souchmax(word1,word2)); 
}

char[] souchmax(char[] word1, char[] word2) {
    int nb = 0;
    int nb_max = 0;
    int fake_i = 0;
    int fake_j = 0;
    char[] new_word =  new char[word1.length];
    char[] new_word_max =  new char[word1.length];
    for (int i = 0 ; i < word1.length ; i++) {
      for (int j = 0 ; j < word2.length ; j++) {
        if (word1[i] == word2[j]) {
          nb++;
          fake_i = i ;
          fake_j = j ;
          int k = 0;
          new_word[k] = word1[i];
          while (word1[fake_i] == word2[fake_j]) {
            k++;
            nb++;
            fake_i++;
            fake_j++;
            if (word1[fake_i] == word2[fake_j]) {
            new_word[k] = word1[fake_i];}
          }
        }
      }
      if (nb_max < nb) {
        nb_max = nb;
        for (int k = 0 ; k < word1.length ; k++) {
          new_word_max[k] = new_word[k];
        }
      }
      nb = 0;
    }
    return new_word_max;
}
