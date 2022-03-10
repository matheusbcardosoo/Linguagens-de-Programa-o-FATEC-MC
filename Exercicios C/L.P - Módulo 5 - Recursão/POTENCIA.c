#include <stdio.h>

float pot (float base, int expoente){
    if (expoente==0) return 1;
    return base*pot(base, expoente-1);
}

main (){
    float base;
    int expoente;
    printf("Entre com a Base e o Expoente: ");
    scanf ("%f %d", &base, &expoente);
    printf("Potencia = %.1f\n", pot(base, expoente));
    return 0;
}