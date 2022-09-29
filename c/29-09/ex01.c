/*
 * Objectif : calcul du remboursement d'un emprunt
 *
 *              C T
 *  A =  -------------------
 *                    -N
 *           1 - (1+T)
 *
 *
 *  Auteur : V. Dalet
 *  Date   : 29 09 2022
 * */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// c = montant emprint
// t = taux d'intéret
// n = nb de remboursement
// a = (CT)/(1-(1+T)**-N)


double calculatesAmprunt(double C,double T, short N){
    return (C*T)/(1-pow((1+T),-N));
}


int main() {
    // déclaration des variables
    double amountBorrowed;
    double interestRate;
    short numberReimbursements;
    // saisie
    printf("Saisir le montent d'emrpint");
    scanf("%lf",&amountBorrowed);
    printf("Saisir le taux d'interet");
    scanf("%lf",&interestRate);
    printf("Saisir le nb de remboursement");
    scanf("%hd",&numberReimbursements);
    // affichage
    printf("Capital %.2lf \n Taux : %.2lf %%  \n Duree : %hd  \n",amountBorrowed,interestRate,numberReimbursements);
    printf("Amprunt : %.2lf", calculatesAmprunt(amountBorrowed,interestRate,numberReimbursements));
    return EXIT_SUCCESS;
}
