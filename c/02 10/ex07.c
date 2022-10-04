/*
 * Programme 7  EX chapitre 1
 * Construciton de mur
 *
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

int nbBrick(int brickSizeW,int brickSizeH,int DimensionWallW,int DimensionWallH) {
    int cH = 0; // compteur
    int cW = 0; // compteur
    while ( cH*brickSizeH != DimensionWallH )
        cH++;
    while ( cW *brickSizeW != DimensionWallW )
        cW++;
    return cH + cW;
}

void nbPackage(int nbBrick,int* nbPackage16 , int* nbPackage8) {
    while ((*nbPackage16+1)*16 <= nbBrick)
        *nbPackage16 = *nbPackage16+1;
    while ((*nbPackage16*16)+((*nbPackage8+1)*8) <= nbBrick)
        *nbPackage8 = *nbPackage8+1;
    if (*nbPackage16*16 + *nbPackage8*8 != nbBrick)
        *nbPackage8 = *nbPackage8+1;;
}

int main() {
    /*Initialization*/
    int nbPackage8 = 0;
    int nbPackage16 = 0;
    int brickSizeW;
    int brickSizeH;
    int DimensionWallW;
    int DimensionWallH;
    /*Input*/
    printf("Largeur de la brique : ");
    scanf("%d",&brickSizeW);
    printf("Hauteur de la brique : ");
    scanf("%d",&brickSizeH);
    printf("Longueur du mur : ");
    scanf("%d",&DimensionWallW);
    printf("Hateur du mur : ");
    scanf("%d",&DimensionWallH);
    /*Function*/
    nbPackage(nbBrick(brickSizeW,brickSizeH,DimensionWallW,DimensionWallH),&nbPackage16,&nbPackage8);
    /*Result*/
    printf("Il faudra acheter %d packet de 16 et %d packet de 8",nbPackage16,nbPackage8);


    return EXIT_SUCCESS;
}
