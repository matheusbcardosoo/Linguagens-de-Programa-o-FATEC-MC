#include <stdio.h>

float calculaHarmonica (int num){
    if (num==0) return 0;
    return 1.0/num + calculaHarmonica(num-1); 
}

main (){
    int num;
    printf("Entre com numero para calcular harmonica: ");
    scanf("%d", &num);
    printf("Harmonica = %.2f\n", calculaHarmonica(num));
    return 0;
}