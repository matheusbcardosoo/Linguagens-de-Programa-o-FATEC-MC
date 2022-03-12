#include <stdio.h>

int par (int num){
    if (num == 1){
        printf("O numero e impar\n");
        return 0;
    } else if (num == 2){
        printf("O numero e par\n");
        return 0;
    }
    par(num-2);
}

main (){
    int num;
    printf("Digite um numero maior que zero: ");
    scanf("%d", &num);
    par(num);
    return 0;
}