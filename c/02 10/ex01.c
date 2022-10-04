/*
 * Programme 2 EX chapitre 1
 * Traitement coordonnées
 *
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int val1, int val2) {
    // somme de deux variables
    return val1 + val2;
}

int switchValues(int* val1 , int* val2) {
    // Change deux valeurs
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

double length(int x1, int y1, int x2, int y2) {
    // Calcule la longueur entre deux points
    return sqrt((pow(x2-x1,2))+(pow(y2 -y1,2)));
}

int ray(int x ,int y ,int x2,int y2,int ray){
    // Verifie si dans un rayon
    return ((x >= x2+ray || x <= x2-ray ) && (y >= y2+ray || y<= y2-ray )) ? 1 : 0;
}

int main() {
    /*Initialization*/
    int x1;
    int x2;
    int y1;
    int y2;
    /*Input*/
    printf("Coordonne x1");
    scanf("%d",&x1);
    printf("Coordonne y1");
    scanf("%d",&y1);
    printf("Coordonne x2");
    scanf("%d",&x2);
    printf("Coordonne y2");
    scanf("%d",&y2);
    /*Function*/
    printf("Somme des deux pts : %d , %d \n" , sum(x1,x2),sum(y1,y2));
    printf("Point millieux : ( %d , %d) \n",sum(x1,x2)/2,sum(y1,y2)/2);
    switchValues(&x1,&x2);
    switchValues(&y1,&y2);
    printf("Nouvelle valeur \n x1 : %d \n y1 : %d \n x2 : %d \n y2 : %d \n",x1,y1,x2,y2);
    printf("Distance des deux points : %.2lf", length(x1,y1,x2,y2));
    printf("%d", ray(x1,y1,x2,y2,6));
    return EXIT_SUCCESS;
}
