/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : FT_SPLIT                    #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 16 05 2023                    ####      #      #  ##   #      */
/* UPDATE  : 16 05 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <malloc.h>

char        **ft_split(char *str,char *charset);
void        ft_print_words_table(char **tab);


int         main() {
    char test[] = "hello this,world";

    char ** array = ft_split(test,",");



    ft_print_words_table(array);


    for(int i = 0 ;array[i] ; i++) {
        free(array[i]);
    }

    free(array);

    return 0;
}

char        **ft_split(char *str,char *charset){

    int count_word = 1;
    int count_letter = 0;

    for (int i = 0 ; str[i] ; i++) {
        if (str[i] == charset[0]) {
            count_word++;
        }
    }



    int len_word[count_word];

    for (int i = 0 ; i < count_word ; i++) {
        len_word[i] = 0;
    }

    for (int i = 0 ; str[i] ; i++) {
        if (str[i] == charset[0]) {
            count_letter++;
        }
        else {
            len_word[count_letter]++;
        }
    }



    char ** array = malloc(count_word * sizeof(char));
    for (int i = 0 ; i < count_word ; i++) {
        array[i] = malloc(len_word[i] *  sizeof(char ));
    }

    count_letter = 0;
    count_word = 0;
    for (int i = 0 ; str[i] ; i++) {
        if (str[i] == charset[0]) {
            count_letter = 0;
            count_word++;
        }
        else {
            array[count_word][count_letter] = str[i];
            count_letter++;
        }
    }

    return array;

}


void        ft_print_words_table(char **tab) {
    for (int i = 0 ; tab[i] ; i++) {
        for (int j = 0 ; tab[i][j] ; j++) {
            printf("%c",tab[i][j]);
        }
        printf("\n");
    }
}