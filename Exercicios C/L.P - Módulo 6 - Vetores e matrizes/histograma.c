#include <stdio.h>
#include <conio.h>

void histograma (float vetor[], float media){
    int aux = 0, i, i2, i3, i4;
    char dia[7] = {'D','S','T','Q','Q','S','S'};
    for (i=0; i<7; i++){
        _textcolor(15);
        printf("%c: ", dia[i]);
        aux = vetor[i];
        if(vetor[i]>media){
            for (i2 = 1; i2 <= aux; i2++){
                _textcolor(4);
                _putch(220);
            }
        }
        if(vetor[i]<media){
            for( i3=1; i3<=aux; i3++){
                _textcolor(1);
                _putch(220);
            }
        }
        if(vetor[i]==media){
            for( i3=1; i3<=aux; i3++){
                _textcolor(2);
                _putch(220);
            }
        }
        printf("\n");
    }
    printf("\n");
    _textcolor(15);
}

float media (float vetor[]){
    float soma=0, media=0;
    for (int i=0; i<7; i++){
        soma += vetor[i];
    }
    media = soma/7;
    return media;
}

float preenche (float vetor[]){
    for (int i=0; i<7; i++){
        printf("%da Temperatura? ", i+1);
        scanf("%f", &vetor[i]);
    }
    printf("\n");
}

main (){
    float vetor[7];
    preenche(vetor);
    histograma(vetor, media(vetor));
    return 0;
}