/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : GAME  CARDS                 #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 25 04 2023                    ####      #      #  ##   #      */
/* UPDATE  : 25 04 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void blend(int *packet) {
    int nb;
    int nb2;
    int temp;
    for (int i = 0 ; i < 52 ; i++) {
        nb = rand() % 52;
        nb2 = rand() % 52;
        temp = packet[nb];
        packet[nb] = packet[nb2];
        packet[nb2] = temp;
    }
}

void display(int * lst, int size) {
    for (int i  = 0 ; i < size ; i++) {
        printf("%d\n", lst[i]);
    }
}


void display2d(int ** lst,int size1,int size2) {
    for (int i = 0 ; i < size1 ; i++) {
        printf("\nJoueur num %d : \n",i+1);
        for (int j = 0 ;j < size2 ; j++) {
            printf("%d ",lst[i][j]);
        }
    }
}

void distrib(int **player, int *packet, int nb_player , int nb_cards) {
    int count = 0;
    for (int i = 0 ; i < nb_player ; i++) {
        for (int j = 0 ; j < nb_cards ; j++) {
            player[i][j] = packet[count];
            count++;
        }
    }
}

void check(int **player , int max_player, int max_cards) {

    for (int i = 0  ; i < max_player ; i++) {
        for (int j = 1 ; j < max_cards ; j++) {
            if (player[i][0]%13 == player[i][j]%13) {
                printf("\nLe player %d a un double",i+1);
            }
        }
    }
}



int main() {
    srand(time(NULL));
    int nb_cards = 52;
    int max_distrib = 5;
    int nb_player = 4;
    int *packet;
    int **player;

    packet = malloc(nb_cards * sizeof(int));

    for (int i = 0 ; i < nb_cards ; i++) {
        packet[i] = i+1;
    }

    player = malloc(nb_player * sizeof(int * ));

    for (int i = 0 ; i < nb_player ; i++) {
        player[i] = malloc(max_distrib * sizeof(int ));
    }


    blend(packet);

    display(packet,nb_cards);

    distrib(player,packet,nb_player,max_distrib);

    display2d(player,nb_player,max_distrib);

    check(player,nb_player,max_distrib);

    free(packet);

    for (int i = 0 ; i < nb_player ; i++) {
        free(player[i]);
    }

    free(player);

}