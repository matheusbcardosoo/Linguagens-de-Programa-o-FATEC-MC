//#TERMIAL.C - CALCULA O TERMIAL DE UM NUMERO NATURAL INSERIDO PELO USUARIO.
//Termial de um número natural positivo n é igual a soma dos n primeiros naturais positivos.
#include <stdio.h>

main(){
    int num, term=0, i; 
    printf ("Exercicio 6 - Termial\nCalcula o termial do numero natural positivo inserido pelo usuario\nInsira um numero: "); 
    scanf ("%i", &num); 

    if (num == 0){ 
        printf ("\nTermial = 0\n"); 
    } else if ( num < 0) { 
        printf ("\nPor favor, insira um numero natural (nulo ou positivo)\n"); 
    } else { 
        for (i=num; i > 0; i--){
            printf ("O valor atual e = %i\n", num);
            term += num;
            printf ("Somado com o anterior = %d\n", term);
            num--;
        }
    }
    return 0; 
}