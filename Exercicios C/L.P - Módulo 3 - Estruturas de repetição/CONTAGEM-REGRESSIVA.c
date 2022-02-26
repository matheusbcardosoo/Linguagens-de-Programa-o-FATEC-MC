#include <stdio.h>

main (){
    int i, num;

    printf ("Entre com um numero: \n");
    scanf ("%d", &num);

    printf ("Iniciando contagem regressiva\n");
    for (i=num; i>0; i--){
        printf ("%d\n", i);
    } 
    return 0; 
} 