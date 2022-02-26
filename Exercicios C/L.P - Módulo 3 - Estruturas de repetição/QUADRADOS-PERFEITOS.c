// Esse código eleva o número inserido pelo usuário ao quadrado .
#include <stdio.h> 

main() { 
    int i, somaI , num, result=0;
    printf("Exercicio 3 - Quadrados perfeitos\nInforme um numero: \n");
    scanf("%d",&num);
    if (num==0){ 
        printf("Atencao: %d elevado ao quadrado sempre resultara em 1!\n",num); 
        return 0; 
    }
    for(i=0; i<num; i++){ 
        somaI= i + (i + 1);
        result += somaI;
        printf ("auxiliar = %d e resultado = %d\n", i, result); 
    }
    printf ("\n %d^2 = %d\n", num, result); 
    return 0; 
} 