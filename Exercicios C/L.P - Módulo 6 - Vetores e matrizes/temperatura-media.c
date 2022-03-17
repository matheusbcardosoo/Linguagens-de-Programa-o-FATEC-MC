#include <stdio.h>

int conta (float vetor[], float media){
    int conta = 0;
    for (int aux=0; aux<7; aux++){
        if(vetor[aux]>media){
            conta += 1;
        }
    }
    return conta;
}

float media (float vetor[]){
    float soma=0, mediaTemperatura=0;
    int aux;
    for (aux=0; aux<7; aux++){
        soma += vetor[aux];
    }
    mediaTemperatura = soma/7;
    return mediaTemperatura;
}

float preenche (float vetor[]){
    for (int aux=0; aux<7; aux++){
        printf ("%da Temperatura = ", aux+1);
        scanf ("%f", &vetor[aux]);
    }
}

main(){
    float vetor[7];
    preenche(vetor);
    float m = media(vetor);
    printf("Media = %.1f %cC\n", m, 248);
    printf("Dias acima da media = %d\n", conta(vetor, m));
    return 0;
}