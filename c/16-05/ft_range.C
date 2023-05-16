/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : FT_RANGE                 #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 16 05 2023                    ####      #      #  ##   #      */
/* UPDATE  : 16 05 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <malloc.h>

int         *ft_range(int min,int max) {
    int *array = malloc((max-min)*sizeof(int));
    for (int i = 0 ; i < max-min ; i++) {
        array[i] = i+min;
    }
    return array;
}

int main() {

    int * array = ft_range(4,10);
    for (int i = 0 ; i < 6 ; i++) {
        printf("%d\n",array[i]);
    }
    free(array);

    return 0;
}