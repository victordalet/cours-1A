/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : INVERSION NB                #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb;
    printf("Saissiez votre nb1");
    scanf("%d",&nb);
    while (nb) {
        printf("%d", nb % 10);
        switch (nb%10) {
            case 1:
                printf("un");
                break;
            case 2:
                printf("deux");
                break;
            case 3:
                printf("trois");
                break;
            case 4:
                printf("Quatre");
                break;
            case 5:
                printf("cinq");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("sept");
                break;
            case 8:
                printf("huit");
                break;
            case 9:
                printf("NEUF");
                break;
            case 0:
                printf("ZERO");
                break;
        }
        nb /= 10;
    }
    return EXIT_SUCCESS;
}

