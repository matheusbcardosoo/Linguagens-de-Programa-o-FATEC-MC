//#FATORIAL.C - CALCULA O FATORIAL DE UM NUMERO INSERIDO PELO USUARIO.
#include <stdio.h>

main(){
    int num, fat; 
    printf ("Exercicio 5 - Fatorial\nCalcula o fatorial do numero inserido pelo usuario\nInsira um numero: ");
    scanf ("%d", &num); 
    if (num == 0){ 
        printf ("\nFatorial = 1\n"); 
    } else if ( num < 0) { 
        printf ("\nPor favor, insira um numero natural (nulo ou positivo)\n"); 
    } else { 
        for (fat = 1; num > 1; num--){ 
            fat *= num; 
            printf ("\nFatorial calculado: %d\n", fat); 
        }
    }
 	return 0; 
}