/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : TEST BOUCLE                 #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 19 10 2022                    ####      #      #  ##   #      */
/* UPDATE  : 19 10 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb;
    int result;
    printf("Entrer un nombre entier");
    scanf("%d",&nb);
    if (nb<0)
        nb = -nb;
    while (nb != 0) {
        result += nb%10;
        nb /= 10 ;
    }
    printf("%d",result);


    return EXIT_SUCCESS;
}

