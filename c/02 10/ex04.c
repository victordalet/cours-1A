/*
 * Programme 5 EX chapitre 1
 * tour de magie
 *
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

void magic(int nb){
    /*Initialization*/
    int val1;
    int val2;
    /*Calcul*/
    val1 = nb%10;
    val2 = ((nb/100) * 10) + nb/10%10;
    /*Display Result*/
    printf("%d + %d = %d (Votre age)",val2 , val1 ,val1+val2 );
}


int main() {
    /*Initialization*/
    int age;
    int randomNumber;
    int nb_final; //soustraction finale
    /*Input*/
    printf("Donner votre age : ");
    scanf("%d",&age);
    age *= 10;
    printf("Multiplier par dix : %d \n",age);
    printf("Donner un nombre aleatoire\n");
    scanf("%d",&randomNumber);
    randomNumber *= 9;
    printf("Multiplier par 9 : %d\n",randomNumber);
    nb_final = age-randomNumber;
    printf("Soustraction de ses deux nombre : %d\n",nb_final);
    /*Function*/
    magic(nb_final);
    return EXIT_SUCCESS;
}
