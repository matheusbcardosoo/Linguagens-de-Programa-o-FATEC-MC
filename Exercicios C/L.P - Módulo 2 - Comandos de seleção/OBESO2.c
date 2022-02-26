//OBESO2.C - determina se uma pessoa está obesa.
//Na versão 2.0 foi adicionado o status 'Magra','Normal','Obesa'. 
#include <stdio.h>
#include <math.h>

int main(){
    int peso, altura;
    float imc;
    printf("Informe o peso (em KG) e a altura (em CM, ex: 180cm = 1.80m): ");
    scanf("%i %i", &peso, &altura);
    imc = (peso/pow(altura,2))*10000;
    printf("IMC = %f\n", imc);

    if(imc < 18.5) {
        puts("Essa pessoa esta magra!\n");
    } else if (imc > 30) {
        puts("Essa pessoa esta obesa!\n");
    } else {
        puts("Essa pessoa esta com IMC Normal!");
    }
    return 0;
}