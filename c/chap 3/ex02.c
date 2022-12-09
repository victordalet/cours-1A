/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 02                       #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 07 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 07 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    int max_c = 50;
    int alphabet[25] = {0};
    char array[max_c];
    int nb;
    int pan = 1;
    int lip = 1;

    /***** Algo ******/


    printf("Selectionner votre text \n");
    for (int i = 0 ; i <= max_c ; i++) {
        scanf(" %c",&array[i]);

        if (array[i] == ',')
            max_c = i-1;

    }


    for (int i = 0 ; i < max_c ; i++) {
        nb = array[i] - 97 ;
        alphabet[nb] = 1;
    }


    for (int i = 0 ; i < 25 ; i++) {
        if (alphabet[i] == 0) {
            pan = 0;
        }
        else {
            lip = 0;
        }
    }
    if (pan == 1)
        printf("Votre texte est un panagramme\n");
    else
        printf("Votre texte n'est pas un panagramme\n");

    if (lip == 1)
        printf("Votre texte un lip\n");
    else
        printf("Votre texte n'est pas un lip\n");


    return EXIT_SUCCESS;
}

