/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : JEU DE FLECHETTE            #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 02 11 2022                    ####      #      #  ##   #      */
/* UPDATE  : 02 11 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int result = 0;
    for (int i=0;i<3;i++){
        printf("Entrez coordonée en x:");
        for(scanf("%d",&x);x<0 || x>24;scanf("%d",&x)){ continue;}
        if (x == 12)
            result += 10;
        else if (x<=16 || x >= 8)
            result += 5;
        else if (x>=4 || x <= 20 )
            result += 2;
    }
    printf("%d",result);
    return EXIT_SUCCESS;
}

