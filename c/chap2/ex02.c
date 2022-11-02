/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : MULTIPLACTION               #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb,nb2;
    double result = 0;
    printf("Saissiez votre nb1");
    scanf("%d",&nb);
    printf("Saissiez votre nb2");
    scanf("%d",&nb2);
    for (int i = 0; i< nb2 ;i++)
        result += nb;
    printf("%d  *  %d = %lf \n",nb,nb2,result);
    result = nb;
    for (int i = 0 ; i < nb2 ; i++)
        result -= nb;
    printf("%d / %d = %lf",nb,nb2,result);



    return EXIT_SUCCESS;
}

