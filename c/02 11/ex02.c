/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : DESSIN ALPHABET             #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <io.h>

int main() {
    int max ;
    write(1,"nb max",6);
    scanf("%d",&max);
    for (int j = 0 ; j <= max ; j++) {
        for (int i = 0; i < j; i++)
            printf("%c",64+j);
        printf("\n");
    }
    return EXIT_SUCCESS;
}

