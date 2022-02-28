//CORRIGIR!
#include <stdio.h> 

main(){ 
    int n, x, i; 
    int max = -1, min = 101; 
    printf("Entre com 5 numeros: \n"); 
    scanf_s("%i", &n); 
    for (i = 0; i < n; i++) { 
        scanf_s("%i", &x); 
        if (x > max){ 
            max = x; 
        }else{ 
            min = x; 
    	}
    } 
    printf("Numero maximo/maior = %i, numero minimo/menor = %i\n", max, min); 
    return 0; 
} 