#include <stdio.h>

int calculaTermial (int num){
    if(num == 1) return 1;
    return num + calculaTermial (num - 1);
}

main (){
    int num;
    printf("Entre com um numero para calcular o termial: ");
    scanf("%d", &num);
    printf("Termial = %d\n", calculaTermial(num));
    return 0; 
}