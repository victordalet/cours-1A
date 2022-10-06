/*
 *  Objectif : Colcule promo
 *  Auteur : V. Dalet
 *  Date   : 06 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

void ApplicRate(int code,double* rate){
    switch(code) {
        case 10:
            *rate=0.02;
            break;
        case 15:
            *rate = 0.05;
            break;
        case 7:
            *rate = 0.03;
            break;
        default:
            *rate = 0;
    }
}


int main() {
    /*Initialization*/
    int code;
    double rate;
    /*Input*/
    printf("taper le code");
    scanf("%d",&code);
    /*Function*/
    ApplicRate(code,&rate);
    printf("%.2lf",rate);
    return EXIT_SUCCESS;
}

