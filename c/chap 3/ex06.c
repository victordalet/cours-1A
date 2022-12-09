/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 06                       #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 09 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 09 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    int array[3][100];
    int array_nb[2][200];
    int x;
    int value_array_nb = 0;
    int find;

    /***** Initialization Algo ******/

    for (int i = 0 ; i < 100 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("Entrer la valeur\n");
            scanf("%d",&array[j][i]);
        }
    }

    /***** Algo ******/
    for (int collumn = 0 ; collumn < 2 ; collumn++) {
        for (int i = 0; i < 100; i++) {
            find = 0;
            for (int j = 0; j < 100; j++) {
                if (array[collumn][i] == array_nb[0][j]) {
                    array_nb[1][j]++;
                    find = 1;
                }
            }
            if (!find) {
                array_nb[0][value_array_nb] = array[0][i];
                value_array_nb++;
            }
        }
    }

    printf("x : \n");
    scanf("%d",&x);

    for (int i = 0 ; i < value_array_nb ; i++) {
        if (array_nb[1][i] >= x )
            printf("le compte %d est suspicieux",array_nb[0][i]);
    }



    return EXIT_SUCCESS;
}
