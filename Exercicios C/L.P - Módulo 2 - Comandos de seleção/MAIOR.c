//Dados dois números distintos, informa qual é o maior.
#include <stdio.h>

main(){
    int num1, num2;
    printf("Informe dois numeros (ou conjunto de numeros): \n");
    scanf("%i %i", &num1, &num2);

    if(num1 > num2){
        printf("O maior numero entre %i e %i eh = %i", num1, num2, num1);
    } else {
        printf("O maior numero entre %i e %i eh = %i", num1, num2, num2);
    }
}