/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : FUNCTION                    #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 12 04 2023                    ####      #      #  ##   #      */
/* UPDATE  : 12 04 2023                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int launch() {
    return rand()%6 +1 ;
}

int is_upper(int c) {
    return (c < 65 || c > 65+27) ? 0 : 1;
}

void change(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int * init_table(int size,int value) {
    int *p;
    p = malloc(size * sizeof(int));
    for (int i = 0 ; i < size ; i++) {
        p[i] = value;
    }
    return p;
}

int main() {
    srand(time(NULL));
    int *p = init_table(4,5);
    free(p);
    return 0;
}