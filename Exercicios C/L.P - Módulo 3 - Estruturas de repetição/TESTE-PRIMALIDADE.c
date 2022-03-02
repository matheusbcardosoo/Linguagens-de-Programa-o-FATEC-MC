//VERIFICA SE UM NUMERO É PRIMO CASO ELE NÃO TENHA DIVISORES MENORES OU IGUAIS A SUA RAIZ QUADRADA.
#include <stdio.h> 
#include <math.h> 

main (){
    int numero, div, numbkp;

    printf("Entre com um numero para o teste de primalidade =\n");
    scanf_s("%d", &numero);
    numbkp = numero;

    numero=ceil(sqrt(numero));
    printf("A raiz quadrada e = %d\n", numero);

        for(div=2; div <= numero - 1; div++){
            if (numero % div == 0){
                break;
            } 
        }
        if (div == numero){
            printf("O numero %d e primo!\n", numbkp);
        } else {
            printf("O numero %d NAO e primo!\n", numbkp);
        }
}