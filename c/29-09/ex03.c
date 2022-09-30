/*
 * EX 05 de la feuille d'exerice
 *
 *
 * calculation 1 : racine ( (racine (a) / a . b) + racine ( b ** racine (b) ) )
 *
 * calculation 2 : ( -b - racine ( b**2 - 4ac) ) / 2a
 *
 * calculation 3 : 1 - ( (x**2) / 2 ) + ( (x**4) / 4! )
 *
 *
 *  Auteur : V. Dalet
 *  Date   : 30 09 2022
 * */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double firstCalculation(double a , double b) {
    return sqrt((sqrt(a/(a*b)))+(sqrt(pow(b, sqrt(b)))));
}

double secondCalculation(double a , double b ,double c) {
    return (-b- sqrt(pow(b,2)-(4*a*c)))/(2*a);
}

long factorial(int n) {
    // mathematical function: factorial (with recursivity)
    if (n == 0)
        return 1;
    else
        return(n * factorial(n-1));
}


double thirdCalculation(int x) {
    return 1-(pow(x,2)/2)+(pow(x,4)/ factorial(4));
}


int main() {
    /* INITIALIZATION VALUE */
    double valueA;
    double valueB;
    double valueC;
    int valueX;
    /* VALUE ENTRY */
    printf("Enter the value a : ");
    scanf("%lf",&valueA);
    printf("Enter the value b : ");
    scanf("%lf",&valueB);
    printf("Enter the value c : ");
    scanf("%lf",&valueC);
    printf("Enter the value x : ");
    scanf("%d",&valueX);
    printf("treatment in progress...\n");
    /* DISPLAY RESULT */
    printf("result of the first calculation : %.2lf\n", firstCalculation(valueA,valueB));
    printf("result of the second calculation : %.2lf\n", secondCalculation(valueA,valueB,valueC));
    printf("result of the third calculation : %.2lf\n", thirdCalculation(valueX));
    return EXIT_SUCCESS;
}
