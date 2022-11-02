/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : PARTIE DE BOWLING           #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int nb_point = 0;
    int score = 0;
    for (int frames = 1 ; frames <=3 ; frames++){
        printf("Frames %d : \n",frames);
        for (int launch=0;launch<2;launch++){
            nb_point +=((int)rand()%(10-nb_point))+1;
            printf("nb de quilles : %d\n",nb_point);
            if (nb_point == 10){
                launch--;
                score += nb_point;
                nb_point = 0;
            }
        }
        score += nb_point;
        nb_point = 0;
    }
    printf("%d",score);
    return EXIT_SUCCESS;
}

