/*
 * Programme 4 EX chapitre 1
 * 
 *  Obejctif : Frait assurance
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>


double franchise(int repairAmount) {
    // calcule franchise (10% des frait des réparations ; min 50€ ; max 800€)
    double sum;
    sum = repairAmount * 0.10;
    if (sum < 50)
        sum = 50;
    else if (sum > 800)
        sum = 800;
    return sum;
}

int main() {
    /*Initialization*/
    int repairAmount;
    /*Input*/
    printf("Montant des reparation : ");
    scanf("%d", &repairAmount);
    /*Function*/
    double sumFranchise = franchise(repairAmount);
    printf("La franchise est de %.2lf euro\n Le montant rembourse est de : %.2lf" , sumFranchise , repairAmount-sumFranchise);
    return EXIT_SUCCESS;
}
