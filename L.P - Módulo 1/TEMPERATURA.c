//TEMPERATURA.C - Tranforma uma temperatura dade em Fahrenheit para Celsius
#include <stdio.h>

main(){
    float tempF, tempC;
    printf("Informe a temperatura em Fahrenheit: \n");
    scanf("%f", &tempF);

    tempC = (tempF-32)*5/9;
    printf("%f graus Fahrenheit equivalem a %f graus Celsius!", tempF, tempC);
    return 0;
}