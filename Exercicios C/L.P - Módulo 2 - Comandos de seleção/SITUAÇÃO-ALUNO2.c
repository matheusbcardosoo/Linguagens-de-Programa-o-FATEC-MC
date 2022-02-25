//Verifica numero de faltas e a media do aluno, se faltas <= 5 e média > 6 aprovado, senão reprovado.
#include <stdio.h>
#include <stdlib.h>

main(){
    int faltas;
    float p1, p2, media;
    printf("Insira as notas da P1 e P2: \n");
    scanf("%f %f", &p1, &p2);
    printf("Insira a quantidade de faltas: \n");
    scanf("%i", &faltas);

    media = (p1 + p2)/2;
    if (media >= 6 && faltas <= 5){
        system("color 0A");
        printf ("Aluno aprovado com media = %f e com %i faltas\n", media, faltas);
    } else {
        system("color 04");
        printf ("Aluno reprovado com media = %f e com %i faltas\n", media, faltas);
    }
    return 0;
}