//Calculadora simples usando if-else dentro do switch case.
// x e * representam multiplicação & / e : representam divisão!
#include <stdio.h>

main(){
    float num1, num2, result;
    char op;

    printf("Entre com a expressao (numero, operador, numero): \n");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op){
        case '+': {
            result = num1 + num2;
            printf("Resultado = %f", result);
            break;
        }
        case '-': {
            result = num1 - num2;
            printf("Resultado = %f", result);
            break;
        } 
        case 'x':
        case '*': {
            result = num1 * num2;
            printf("Resultado = %f", result);
            break;
        } 
        case ':':
        case '/': {
            if(num2==0){
                printf("Nao e possivel dividir por 0!");
                break;
            } else {
                result = num1 / num2;
                printf("Resultado = %f", result);
                break;
            }
        }
        default: printf("Operador inválido : %c\n Tente novamente com os operadores: +, -, *, /\n", op);
    }
    return 0;
}