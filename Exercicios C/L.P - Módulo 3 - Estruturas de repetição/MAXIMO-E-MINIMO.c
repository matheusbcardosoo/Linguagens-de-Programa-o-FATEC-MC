//DADO UM CONJUNTO DE 5 NUMEROS, IMPRIME O MAXIMO E MINIMO
//!!!REALIZAR CORREÇÃO!!!
#include <stdio.h> 

main(){ 
    int n, x, i, max, min; 
    printf("Entre com 5 numeros: \n"); 
    scanf("%d", &n); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &x); 
        if (x == 0){ 
            max = min = x; 
        }else{ 
            if (x > max) max = x;
            if (x < min) min = x;
    	}
    } 
    printf("Numero maximo/maior = %i, numero minimo/menor = %i\n", max, min); 
    return 0; 
} 