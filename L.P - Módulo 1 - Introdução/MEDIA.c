//MEDIA.C - INFORMA A MÉDIA ENTRE DUAS NOTAS.
#include<stdio.h>

main(){
    float n1, n2, media;
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2)/2;

    printf("A media das notas %f + %f = %f\n", n1, n2, media);
    return 0;
}