/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 05                       #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 09 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 09 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    int width;
    int height;
    int len_lst;
    int mod;
    int type_color;
    int coordone;

    /***** Initialization Algo ******/
    printf("Saisisez la largeur\n");
    scanf("%d",&width);
    printf("Saisisez la hauteur\n");
    scanf("%d",&height);

    len_lst = 2 + width * height * 3;
    int img[len_lst];

    img[0] = width;
    img[1] = height;

    for (int i = 2 ; i < len_lst ; i+= 3) {
        printf("Saissiez le R du pixel :\n");
        scanf("%d",&img[i]);
        printf("Saissiez le G du pixel :\n");
        scanf("%d",&img[i+1]);
        printf("Saissiez le B du pixel :\n");
        scanf("%d",&img[i+2]);
    }

    /***** Algo ******/

    do {
        printf("0 - Quitter\n");
        printf("1 - Rendre ce tableau bleu\n");
        printf("2 - Rendre ce tableau vert\n");
        printf("3 - Rendre ce tableau rouge\n");
        printf("4 - Afficher la couleur d'un pixel\n");
        printf("5 - Modifier la couleur d'un pixel\n");
        printf("6 - Lisser le tableau\n");
        printf("7 - Afficher le tableau \n");
        scanf("%d",&mod);

        if (mod == 1)
            type_color = 2;
        if (mod == 2)
            type_color = 1;
        if (mod == 3)
            type_color = 0;
        if (mod == 1 || mod == 2 || mod == 3) {

            for (int i = 2 ; i < len_lst ; i+= 3) {
                img[i] = 0;
                img[i+1] = 0;
                img[i+2] = 0;
                img[i + type_color] = 255;
            }

        }

        if (mod == 4 || mod == 5) {
            printf("Saisisez le pixel : \n");
            scanf("%d",&coordone);
            coordone += 2;
        }

        if (mod == 4) {
            for (int i = 0 ; i < 3 ; i++)
                printf("%d",img[coordone + i ]);
        }

        if (mod == 5) {
            printf("Saissiez le R du pixel : \n");
            scanf("%d",&img[coordone]);
            printf("Saissiez le G du pixel : \n");
            scanf("%d",&img[coordone+1]);
            printf("Saissiez le B du pixel : \n");
            scanf("%d",&img[coordone+2]);
        }

        if (mod == 6) {
            for (int i = 5 ; i < len_lst-3 ; i+= 3) {
                for (int j = 0 ; j < 3 ; j++)
                    img[i]  = img[i+j]*0.8 + img[i+j-3]*0.1 +img[i+j+3]*0.1 ;
            }
        }

        if (mod == 7) {
            for (int i = 2 ; i < len_lst ; i+= 3) {
                for (int j = 0 ; j < 3 ; j++)
                    printf("%d",img[i+j]);
                printf("\n");
            }
        }

    }while (mod != 0);

    return EXIT_SUCCESS;
}
