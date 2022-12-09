/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 07                       #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 09 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 09 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    int birthday[100];
    int days[360] = {0};

    /***** Initialization Algo ******/

    for (int i = 0 ; i < 100 ; i++) {
        birthday[i] = rand()%360;
    }

    /***** Algo ******/

    for (int i = 0 ; i < 100 ; i++)
        days[birthday[i]]++;

    /***** Display result ******/
    for (int i = 0 ; i < 100 ; i++) {
        printf("Etudiant numero %d, ne le jours %d\n",i+1,birthday[i]);
    }
    for (int i = 0 ; i < 360 ; i++) {
        printf("%d etudiants ont leur anniversaire le jour %d\n",days[i],i+1);
    }

    return EXIT_SUCCESS;
}
