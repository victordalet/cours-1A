/* *********************************************************************** */
/*                                                                         */
/* OBJECTIVE : EX 04                       #####      ###    ###    #      */
/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
/* CREATED : 07 12 2022                    ####      #      #  ##   #      */
/* UPDATE  : 07 12 2022                    #         #      #   #   #      */
/*                                         ####    ###      #####   #.fr   */
/* *********************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /***** Initialization ******/
    int number;
    int number2;
    int number_test;
    int number_test2;
    int len_number = 0;
    int len_number2 = 0;
    int temp;
    int bro = 1;

    /***** Initialization Algo ******/
    printf("Saisisez un nb");
    scanf("%d",&number);
    printf("Saisisez un nb");
    scanf("%d",&number2);

    number_test = number;
    while (number_test) {
        len_number++;
        number_test/=10;
    }

    int array_number[len_number];

    number_test = number;

    for (int i = 0 ; i < len_number ; i++) {
        array_number[i] = number_test % 10;
        number_test /= 10;
    }

    number_test2 = number2;
    while (number_test2) {
        len_number2++;
        number_test2 /= 10;
    }

    int array_number2[len_number2];

    number_test2 = number2;

    for (int i = 0 ; i < len_number2 ; i++) {
        array_number2[i] = number_test2 % 10;
        number_test2 /= 10;
    }

    /***** Algo ******/

    if (len_number == len_number2) {

       /*** Tri Bulle  ***/
       for (int i = len_number -1 ; i >= 1  ; i--) {
           for (int j = 0; j < i - 1; j++) {
               if (array_number[j + 1] < array_number[j]) {
                   temp = array_number[j + 1];
                   array_number[j + 1] = array_number[j];
                   array_number[j] = temp;
               }

               if (array_number2[j + 1] < array_number2[j]) {
                   temp = array_number2[j + 1];
                   array_number2[j + 1] = array_number2[j];
                   array_number2[j] = temp;
               }
           }
       }
       

       for (int i = 0 ; i < len_number ; i++) {
            if (array_number[i] != array_number2[i])
                bro = 0;
       }


    }
    else
        bro = 0;


    /***** Display result ******/
    if (bro)
        printf("Les deux nb sont freres");
    else
        printf("Les deux nb ne sont pas freres");


    return EXIT_SUCCESS;
}
