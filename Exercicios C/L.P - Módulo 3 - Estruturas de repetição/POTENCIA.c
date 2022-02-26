#include <stdio.h> 
#include <math.h> 

main(){ 
    int i, xNum, xNum2, nPotencia, aux, result ; 
    printf ("Insira um valor: \n"); 
    scanf ("%d", &xNum);  
    printf ("Qual o valor da potencia que deseja elevar? \n");  
    scanf ("%d", &nPotencia);  

    if (nPotencia == 0) { 
        printf ("Por definicao o resultado e = 1\n"); 
    } else if (nPotencia < 0){ 
        printf ("Por favor, insira um numero natural (nulo ou positivo)\n"); 
    } else {
        xNum2 = xNum;
        for (i=1; i<nPotencia; i++){ 
            printf("Fase %i %d * %d\n",i, xNum2, xNum); 
            result = xNum2 * xNum; 
            printf("Resultado = %d\n", result);
            xNum2 = result;
        } 
    } 
return 0; 
} 