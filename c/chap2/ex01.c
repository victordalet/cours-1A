/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : NOTE FR EN USA              #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <io.h>

int main() {
    double note;
    printf("Saissiez votre note");
    for (scanf("%lf",&note);note< 0 || note > 20;scanf("%lf",&note)){ continue;}
    if (note < 5.6)
        printf("F");
    else if (note < 9.9)
        printf("D");
    else if (note < 10.9)
        printf("C-");
    else if (note < 11.9)
        printf("C");
    else if (note < 12.9)
        printf("C+");
    else if (note < 13.9)
        printf("B-");
    else if (note < 14.9)
        printf("B");
    else if (note < 15.9)
        printf("B+");
    else if (note < 16.9)
        printf("A-");
    else if (note <= 17.9)
        printf("A");
    else
        printf("A+");

    return EXIT_SUCCESS;
}

