//Verifica numero de faltas e a media do aluno, se média > 6 aprovado independente do numero de faltas, 
//se media < 4 reprovado ou se media >= 4 e falta <= 5 fica de recuperação.
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
    if (media >= 6){
        system("color 0A");
        printf ("Aluno aprovado com media = %f e %i faltas\n", media, faltas);
    } else {
        if (media >= 4 && faltas <=5){
            system("color 0E"); 
            printf ("Aluno ficou de recuperacao com media = %f e %i faltas\n", media, faltas);
        } else {
            system("color 0C"); 
            printf ("Aluno reprovado com media = %f e %i faltas\n", media, faltas);
        }
    }
    return 0;
}