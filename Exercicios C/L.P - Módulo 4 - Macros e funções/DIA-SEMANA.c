#include <stdio.h>

int dds(n){
    switch(n){
        case 1: printf("Segunda-feira\n"); break;
        case 2: printf("Terca-feira\n"); break;
        case 3: printf("Quarta-feira\n"); break;
        case 4: printf("Quinta-feira\n"); break;
        case 5: printf("Sexta-feira\n"); break;
        case 6: printf("Sabado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: return 0; 
    }
}

main(){
    int n;
    printf("Entre com um numero de 0 a 7: ");
    scanf("%d", &n);
    dds(n);
    return 0;
}