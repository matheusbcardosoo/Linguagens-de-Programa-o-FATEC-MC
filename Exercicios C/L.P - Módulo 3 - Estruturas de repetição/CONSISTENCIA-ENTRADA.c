//IMPRIME A RAIZ QUADRADA DE UM NUMERO REAL NÃO NEGATIVO.
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

main (){
    float raizNum;

    do {
        printf("Entre com um numero real nao negativo: \n");
        scanf("%f", &raizNum);

        if (raizNum <= 0){
            printf("Numero invalido. Tente novamente!\n");
        } else {
            break;
        }
    } while (true);

    raizNum = sqrt(raizNum);
    printf("A raiz do numero inserido e = %f\n", raizNum);
    return 0;
}