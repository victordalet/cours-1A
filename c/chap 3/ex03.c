/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 03                       #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 07 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 07 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    int array[100][100];
    int result[100] = {0};
    int result_column[100] = {0};
    int min[100] = {0};
    int max[100] = {0};
    int pt_seuil[100] = {0};

    /***** Algo ******/

    for (int i = 0; i < 100; i++) {
        printf("------------------------------\n");
        printf("Saisisez les valeur de la table %d\n", i + 1);
        for (int j = 0; j < 100; j++) {
            printf("Saissisez la valeur\n");
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 100; i++) {
        printf("\n");
        for (int j = 0; j < 100; j++) {
            printf("%d ",array[i][j]);
            result[i] += array[i][j];
            result_column[i] += array[j][i];
        }
    }


    for (int i = 0 ; i < 100 ; i++){
        for (int j = 0 ; j < 100 ; j++) {
            if (min[i] > array[j][i])
                min[i] = array[j][i];
            if (max[i] < array[i][j])
                max[i] = array[i][j];
        }

        if (min[i] == max[i]) {
            pt_seuil[i] = min[i];
        }
    }


    /***** Display result ******/
    for (int i = 0 ; i < 100 ; i++) {
        printf("le resultat de la ligne %d est :  %d \n", i, result[i]);
        printf("le resultat de la collomne %d est : %d\n", i, result_column[i]);
        if (pt_seuil[i] != 0)
            printf("le pt de seil de la ligne %d est : %d\n", i, pt_seuil[i]);
    }


    return EXIT_SUCCESS;
}
