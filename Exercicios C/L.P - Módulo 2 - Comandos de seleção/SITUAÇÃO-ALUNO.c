//Situação do aluno, se media > 6 aprovado, senão reprovado.
#include <stdio.h>

main(){
    float p1, p2, media;
    printf("Insira as notas da P1 e P2: \n");
    scanf("%f %f", &p1, &p2);

    media = (p1 + p2)/2;
    if (media >= 6){
        printf ("Aluno aprovado com media = %f", media);
    } else {
        printf ("Aluno reprovado com media = %f", media);
    }
    return 0;
}