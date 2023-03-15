/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : TAB DYNAMIZED               #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 15 03 2023                    ####      #      #  ##   #      */
/* UPDATE  : 15 03 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}


int main() {

    int taille;
    char *tab;

    printf("Len : ");
    scanf("%d", &taille);

    tab = (char *) malloc(taille * sizeof(char));

    printf("Ele: ");
    for (int i = 0; i < taille; i++) {
        scanf(" %c", &tab[i]);
    }

    for (int i = 0; i < taille; i++) {
        printf("%c ", tab[i]);
    }
    printf("\n");

    for (int i = 0; i < taille; i++) {
        tab[i] = toUpper(tab[i]);
    }

    for (int i = 0; i < taille; i++) {
        printf("%c ", tab[i]);
    }
    printf("\n");


    tab = (char *) realloc(tab, sizeof(char));
    tab[taille] = 'c';



    for (int i = 0; i < taille+1; i++) {
        printf("%c ", tab[i]);
    }

    free(tab);
    return 0;
}