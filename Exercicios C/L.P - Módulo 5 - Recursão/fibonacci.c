#include <stdio.h>

int fibonacci (int num){
    if (num==1 || num==2){
        return 1;
    } else {
        return fibonacci (num-1) + fibonacci (num-2);
    }
}

main (){
    int num, aux;
    printf("Entre com um numero: ");
    scanf ("%d", &num);
    for (int i=0; i < num; i++){
        aux = fibonacci(i + 1);
    }
    printf("A n-esimo termo e = %d\n", aux);
}