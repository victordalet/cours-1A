/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : TABLEAU CHAR                #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 16 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 16 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {

    int table[200];
    int nb_alphabet[26] = {0};
    char letter;
    int letter_find = 1;

    for (int i = 0 ; i < 200 ; i++)
        table[i] = rand()%26 +97;
    
    for (int i = 0 ; i < 200 ; i++)
        printf("%c\n",table[i]);

    printf("Saisir une lettre\n");
    scanf("%c",&letter);

    for (int i = 0 ; i < 200 ; i++) {
        if (table[i] == letter)
            letter_find = 1;
    }
    printf("\n%d\n",letter_find);

    for (int i = 0 ; i < 200 ; i++)
        nb_alphabet[table[i]-97]++;

    for (int i = 0 ; i < 26 ; i++)
        printf("%c : %d\n",i+97,nb_alphabet[i]);

    return EXIT_SUCCESS;
}

