/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : DESSIN                      #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;
    printf("Enter number of rows: \n");
    scanf("%d",&rows);
    for (int i = 1 ; i <= rows/2 ; i++){
        for (int space = 0 ; space <= (rows-i);space++) {
            if (space + 1 == i)
                printf("*");
            else
                printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i=0;i<=rows;i++){
        if (i==rows/2)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
    for (int i = rows/2 ; i >= 1 ; i--){
        for (int space = 0 ; space <= (rows-i);space++) {
            if (space + 1 == i)
                printf("*");
            else
                printf(" ");
        }
        printf("*");
        printf("\n");
    }


    return EXIT_SUCCESS;
}

