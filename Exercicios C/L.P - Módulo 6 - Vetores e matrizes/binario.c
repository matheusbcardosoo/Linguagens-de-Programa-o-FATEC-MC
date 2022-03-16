#include <stdio.h>

void binario (int num){
    int vetor[8], i;
    for (i = 7; i >= 0; i--){
        if(num%2 != 0){
            vetor[i] = 1;
            num /= 2;
        } else {
            vetor[i] = 0;
            num /= 2;
        }
    }
    for (i = 1; i <= 7; i++){
        printf("%d", vetor[i]);
    }
    printf("\nIgnore os zeros a esquerda, pois nao afetam o resultado.");
}

main (){
    int num;
    printf ("Insira o numero que deseja converter para binario: ");
    scanf("%d", &num);
    binario(num);
    return 0;
}