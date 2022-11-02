/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : JEU DE DEE                  #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int score_player_1 = 0;
    int score_player_2 = 0;
    int result;
    while (score_player_1 <= 50 && score_player_2 <= 50){
        for (int i = 1;i<3;(result == 6)?printf("Le joeur %d rejoue (cause obtention d'un 6)",i):i++){
            if (score_player_1 <= 50 || score_player_2 <= 50) {
                result = ((int) rand() % 6) + 1;
                if (i == 1)
                    score_player_1 += result;
                else
                    score_player_2 += result;
                printf("le joeur %d a obtenu un %d\n", i, result);
            }
        }
        printf("Score actuel -> J1 : %d ; j2 : %d\n\n",score_player_1,score_player_2);
        sleep(1);
    }
    if (score_player_1 >= 50)
        printf("Le joeur 1 gagne\n");
    if (score_player_2 >= 50)
        printf("Le joeur 2 gagne");
    return EXIT_SUCCESS;
}

