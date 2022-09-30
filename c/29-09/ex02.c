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
    int a = 0xa; // decimal to Hex : 10
    int b = 0x01; // decimal to Hex : 1
    int c = 010; // decimal to Hex : 8
    a += b + c; 
    b += c; 
    c = a - c; 
    a = a - c; 
    b = c - b + a; 
    c += - b; 
    printf("%d %d %d", a, b, c);
    return EXIT_SUCCESS;
}				