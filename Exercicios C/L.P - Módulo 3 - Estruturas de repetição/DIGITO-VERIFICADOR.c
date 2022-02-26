//#DIGITO-VERIFICADOR.C - MOSTRA O DIGITO VERIFICADOR DE UMA CONTA CORRESPONDENTE A UM NUMERO NATURAL INSERIDO PELO USUARIO.
#include <stdio.h>

main(){
    int i, num, num2, soma=0, resto, p1, p2, div;
    printf("Exercicio 6 - Digito Verificador\nMostra o digito verificador do numero inserido pelo usuario\nInsira um numero de conta com no maximo 6 digitos: ");
    scanf("%i", &num);

    if( num < 100000){
        num = 000000 + num;
    } 
    printf("Verificando o numero de conta = %i\n", num);
    p1 = 1000000, p2 = 100000, div = 100000, i = 1; 
    while (i <= 6){ 
        num2 = (num %p1 - num %p2)/div; 
        soma += num2; 
        printf ("%i passo = %i; SOMA = %i\n",i, num2, soma); 
        i++; 
        p1 /= 10; 
        p2 /= 10; 
        div /= 10; 
        resto = soma%10; 
    } 
    printf("A conta verificada e: %i-%i\n", num, resto);
    return 0;
}