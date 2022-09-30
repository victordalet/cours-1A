/*
 * EX 01 jeu de dée
 *
 *
 *  Auteur : V. Dalet
 *  Date   : 30 09 2022
 * */


#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main() {
    /*INITAILISATION*/
    int score = 0;
    int result;
    int choice;
    int nb_game;
    printf("JEU DE DEE \n NB de partie : ");
    scanf("%d",&nb_game);
    srand((unsigned) time(NULL));
    /*Boucle de jeu*/
    for (int i = 0 ; i < nb_game ; i++) {
        printf("faite votre paris");
        scanf("%d", &choice);
        result = (rand() % 6) + 1;
        printf("%d\n", result);
        /*calcule du résultat*/
        if (result == choice) {
            score++;
            printf("Victoire \n Votre socre : %d \n",score);
        }
        else {
            score--;
            printf("Defaite \n Votre score : %d \n",score);
        }
    }
    printf("Fin de partie");
    return EXIT_SUCCESS;
}
