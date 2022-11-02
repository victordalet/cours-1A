/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : DESSIN *                    #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int max = 8;
    for (int j = 0 ; j < max ; j++) {
        for (int i = 0; i < j; i++)
            printf("*");
        printf("\n");
    }
    for (int j = 0 ; j < max ; j++) {
        for (int i = max; i > j; i--)
            printf("*");
        printf("\n");
    }
    return EXIT_SUCCESS;
}

