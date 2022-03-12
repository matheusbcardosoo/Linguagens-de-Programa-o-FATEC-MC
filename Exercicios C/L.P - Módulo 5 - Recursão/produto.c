#include <stdio.h>

int funcaoMultiplica (int num1, int num2, int cont, int aux){
    if (cont == num2) return num1;
    funcaoMultiplica((num1 + aux), num2, cont+1, aux);
}

main(){
    int num1, num2, cont = 1, aux = 0;
    printf("Insira dois termos naturais para multiplicacao: ");
    scanf("%d %d", &num1, &num2);
    aux = num1;
    printf("Resultado = %d\n", funcaoMultiplica(num1, num2, cont, aux));
    return 0; 
}