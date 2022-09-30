/*
 * EX 03 de la feuille d'exerice
 *
 *
 * calcule en hexadecimal
 *
 *  Auteur : V. Dalet
 *  Date   : 30 09 2022
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10; // decimal to Hex : 10 0xa
    int b = 1; // decimal to Hex : 1 0x01
    int c = 8; // decimal to Hex : 8  010
    a += b + c; 
    b += c; 
    c = a - c; 
    a = a - c; 
    b = c - b + a; 
    c -=  b; 
    printf("%d %d %d", a, b, c);
    return EXIT_SUCCESS;
}				