/*
 * Programme 6 EX chapitre 1
 * imprimante
 *
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

int time(char letter1 , char  letter2){
    /*Initialization*/
    char result =  letter2 - letter1; // diference deux lettre
    char dif;
    char middle = ('Z'-'A')/2; // millieux de l'alphabet
    if (result < 0)
        result = -result; // rend le nb positig
    if (result > middle ){ // si supérieur au millieux partir de l'autre sens
        dif = result - middle;
        result-= dif*2;
        result+= 2;
    }
    return  result;
}

int main() {
    /*Initialization*/
    char letter1 = 'O';
    char letter2 = 'D';
    /*Input*/
    /*printf("Entrer la lettre de depart : ");
    scanf("%c",&letter1);
    printf("Entrer la lettre de fin : ");
    scanf("%d",&letter2);*/
    /*Function*/
    printf("Il faudra %d seconde", time(letter1,letter2));
    return EXIT_SUCCESS;
}
