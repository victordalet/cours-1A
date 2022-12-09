/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 01                       #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 07 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 07 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    int array[100];
    int positiveArray[100];
    int negativeArray[100];
    int mod;
    int max;
    int min;

    /***** Algo ******/
    do {

        printf("1 - Launch \n 2 - Exit\n");
        scanf("%d",&mod);

        if (mod == 1) {

            for (int i = 0 ; i < 100 ; i++) {
                printf("Saisir une valeur : \n");
                scanf("%d",&array[i]);
            }

            for (int i = 0 ; i < 100 ; i++) {
                printf("%d\n",array[i]);
            }

            for (int i = 0 ; i < 100 ; i++) {
                array[100-i] = array[i];
            }

            for (int i = 0 ; i < 100 ; i++) {
                printf("%d\n",array[i]);
            }

            for (int i = 100 ; i > 0 ; i--) {
                if (array[i] < 0) {
                    positiveArray[i] = array[i];
                }
                else {
                    positiveArray[i] = array[i];
                }
            }

            max = array[0];
            min = array[0];

            for (int i = 1 ; i < 100 ; i++) {
                if (min > array[i])
                    min = array[i];
                if (max < array[i])
                    min = array[i];
            }

            printf("Valeur max : %d \n",max);
            printf("Valeur min : %d\n",min);

        }

    }while(mod != 0);

    return EXIT_SUCCESS;
}

