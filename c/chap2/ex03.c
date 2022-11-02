/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : CALCUL PHOTO                #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb_picture;
    double result = 5;
    printf("NB de photo voulus : ");
    for (scanf("%d",&nb_picture);nb_picture<=0; scanf("%d",nb_picture)){ continue;}
    for (int i = 0;i<nb_picture;i++){
        if (i<=10)
            continue;
        if (i<=30)
            result += 0.16;
        else if (i<=60)
            result += 0.13;
        else if (i<=100)
            result += 0.1;
        else
            result +=0.08;
    }
    result *= 1.2;
    result += 4.5;
    printf("Vous devez payer : %lf euro.",result);
    return EXIT_SUCCESS;
}

