#include <stdio.h>

void converteBinario (int num){
    int aux;
    if (num/2==0){
        printf("%d", num%2);
    } else {
        aux=num/2;
        converteBinario(aux);
        printf("%d", num%2);
    }
}

main(){
    int num;
    printf("Qual numero deseja converter para binario?\nDigite o numero aqui: ");
    scanf("%d", &num);
    converteBinario(num);
    return 0;
}