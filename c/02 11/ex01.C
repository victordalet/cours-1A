/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : ALPHABET                    #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int j = 0 ; j < 26 ; j++) {
        if (j%2)
            printf("%c",65+j);
        else
            printf("%c",97+j);
    }
    return EXIT_SUCCESS;
}

