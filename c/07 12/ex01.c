/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : TABLEAU 2 DIM               #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 07 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 07 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    double array[3][5];
    double result = 0;
    int mod;

    /***** Algo ******/
    do {

        printf("1 - Launch \n 2 - Exit\n");
        scanf("%d",&mod);

        if (mod == 1) {

            for (int i = 0; i < 3; i++) {
                printf("------------------------------\n");
                printf("Saisisez les valeur de la table %d\n", i + 1);
                for (int j = 0; j < 5; j++) {
                    printf("Saissisez la valeur\n");
                    scanf("%lf", &array[i][j]);
                }
            }

            for (int i = 0; i < 3; i++) {
                printf("\n");
                for (int j = 0; j < 5; j++) {
                    printf("%.2lf ",array[i][j]);
                    result += array[i][j];
                }
            }

            /***** Display result ******/
            printf("le resultat est %.2lf", result);

            /**** Reset values ***/
            result = 0;
        }

    }while(mod != 0);




    return EXIT_SUCCESS;
}

