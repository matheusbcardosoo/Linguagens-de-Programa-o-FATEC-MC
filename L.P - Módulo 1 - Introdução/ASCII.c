//ASCI.c - Exige código ASCII em octal, decimal e hexadecimal.
#include <stdio.h>

main(){
    char c;
    printf("Insira um caractere: ");
    scanf("%c", &c);
    printf("ASCII em octal = %o\n", c);
    printf("ASCII em decimal = %d\n", c);
    printf("ASCII em hexadecimal = %x\n", c);
    return 0;
}