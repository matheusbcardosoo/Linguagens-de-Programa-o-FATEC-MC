//PERIM.C - Informa o perímetro da circunferência.
#include <stdio.h>

main(){
    float raio;
    printf ("Qual o raio?");
    scanf("%f", &raio);
    float perim = 2*3.14*raio;
    printf("Perimetro = %f\n", perim);
    return 0;
}