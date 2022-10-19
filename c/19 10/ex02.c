/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : CALCULE MOYENNE             #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 19 10 2022                    ####      #      #  ##   #      */
/* UPDATE  : 19 10 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    double nb;
    int nb_nb = 0;
    double result;
    do {
        printf("Rentrez un nb (-1 pour quitter)");
        scanf("%lf",&nb);
        if (nb >= 0 && nb <=20) {
            nb_nb++;
            result += nb;
        }
    }
    while (nb!=-1);
    if (nb_nb != 0) {
        result /= nb_nb;
        printf("Moyenne : %.2lf", result);
    }
    return EXIT_SUCCESS;
}

