/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : FUNCTION MATRIX             #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 25 04 2023                    ####      #      #  ##   #      */
/* UPDATE  : 25 04 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void print2d(int (*p)[3]) {
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d",p[i][j]);
        }
    }
}

int main() {
    int matrix[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    print2d(matrix);
}