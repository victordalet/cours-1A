/*
 * Programme 2 EX chapitre 1
 *
 *  Objectif : Traitement coordonnées
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sum(double val1, double val2) {
    // somme de deux variables
    return val1 + val2;
}

double switchValues(double* val1 , double* val2) {
    // Change deux valeurs
    double temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

double length(double x1, double y1, double x2, double y2) {
    // Calcule la longueur entre deux points
    return sqrt((pow(x2-x1,2))+(pow(y2 -y1,2)));
}

int ray(double x ,double y ,double x2,double y2,double ray){
    // Verifie si dans un rayon
    return ((x >= x2+ray || x <= x2-ray ) && (y >= y2+ray || y<= y2-ray )) ? 1 : 0;
}

int main() {
    /*Initialization*/
    double x1;
    double x2;
    double y1;
    double y2;
    /*Input*/
    printf("Coordonne x1");
    scanf("%lf",&x1);
    printf("Coordonne y1");
    scanf("%lf",&y1);
    printf("Coordonne x2");
    scanf("%lf",&x2);
    printf("Coordonne y2");
    scanf("%lf",&y2);
    /*Function*/
    printf("Somme des deux pts : %.2lf , %.2lf \n" , sum(x1,x2),sum(y1,y2));
    printf("Points millieux : ( %.2lf , %.2lf) \n",sum(x1,x2)/2,sum(y1,y2)/2);
    switchValues(&x1,&x2);
    switchValues(&y1,&y2);
    printf("Nouvelle valeur \n x1 : %.2lf \n y1 : %.2lf \n x2 : %.2lf \n y2 : %.2lf \n",x1,y1,x2,y2);
    printf("Distance des deux points : %.2lf", length(x1,y1,x2,y2));
    printf("%d", ray(x1,y1,x2,y2,6));
    return EXIT_SUCCESS;
}
