/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : Moyenne tableau             #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 16 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 16 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {

    double table[10];
    double result = 0;

    for (int i = 0 ; i < 10 ; i++) {
        printf("Entrer la valeur%d\n",i);
        scanf("%lf",&table[i]);
    }
    for (int i = 0 ; i < 10 ; i++) {
        printf("%.2lf", table[i]);
        result += table[i];
    }

    printf("\nmoyenne :  %.2lf",result/10);


    return EXIT_SUCCESS;
}

