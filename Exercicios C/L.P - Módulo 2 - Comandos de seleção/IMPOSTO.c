//Imposto de renda - aliquotas conforme salario.
#include <stdio.h>

main(){
    float salario, IR;
    printf("Informe o seu salario: \n");
    scanf("%f", &salario);

    if(salario <= 1903.98){
        printf("Voce ficou ISENTO!");
    } else if(salario > 1903.98 && salario <= 2826.65){
        IR = salario * 0.075;
        printf("Voce deve pagar R$ %f de IR.", IR);
    } else if (salario > 2826.65 && salario <= 3751.05){
        IR = salario * 0.15;
        printf("Voce deve pagar R$ %f de IR.", IR);
    } else if (salario > 3751.05 && salario <= 4664.68){
        IR = salario * 0.225;
        printf("Voce deve pagar R$ %f de IR.", IR);
    } else if (salario > 4664.68){
        IR = salario * 0.275;
        printf("Voce deve pagar R$ %f de IR.", IR);
    }
}