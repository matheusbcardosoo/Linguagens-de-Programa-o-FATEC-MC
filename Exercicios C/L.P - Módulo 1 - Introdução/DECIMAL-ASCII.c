//DECIMAL-ASCII.C - Coleta um número decimal e tranforma em caractere ASCII.
#include <stdio.h>

main(){
    int num;
    printf("Insira um numero decimal: ");
    scanf("%d", &num);
    printf("ASCII correspondente = %c\n", num);
    return 0;
}