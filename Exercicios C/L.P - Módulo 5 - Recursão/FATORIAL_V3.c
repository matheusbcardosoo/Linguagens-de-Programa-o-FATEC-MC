#include <stdio.h>

int fat (n){
    if (n==0) return 1;
    return n*fat(n-1);
}

main(){
    int n;
    printf("Insira um numero para calcular o fatorial: ");
    scanf("%d", &n);
    printf("Fat = %d\n", fat(n));
    return 0;
}