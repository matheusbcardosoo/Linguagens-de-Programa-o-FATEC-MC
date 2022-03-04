#include <stdio.h>
#include <math.h>

int _quadradosPerfeitos (res, num, soma){
    res = 1;
    soma = res;
    printf("\n%d",res);
    for (int i =1; i < num; i++){
        res += 2;
        soma += res;
        printf("+%d",res);
    }
    return soma;
}

main (){
    int num, res, soma;
    printf("Entre com um numero: \n");
    scanf("%d", &num);
    printf("\nO quadrado desse numero e = %2d\n",_quadradosPerfeitos(res,num,soma));
    return 0;
}