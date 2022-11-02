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
    int k = 0;
    printf("Enter number of rows: \n");
    scanf("%d",&rows);
    for (int i = 1 ; i <= rows ; i++){
        for (int space = 0 ; space <= (rows-i);space++)
            printf(" ");
        while (k!=2*i-1){
            printf("*");
            k++;
        }
        k=0;
        printf("\n");
    }


    return EXIT_SUCCESS;
}

