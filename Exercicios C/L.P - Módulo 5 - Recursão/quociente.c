#include <stdio.h>

int dividir (int num1, int num2, int soma){
    if((num1-num2) < num2){
        return soma;
    }
    dividir (num1 - num2, num2, soma + 1);
}

main(){
    int num1, num2, soma = 1;
    float result;
    printf("Insira dois numeros naturais, um a ser dividido e um divisor: ");
    scanf("%d %d", &num1, &num2);
    result = dividir(num1, num2, soma);
    printf("Resultado = %.1f\n", result);
    return 0;
}