#include <stdio.h>

void contagemRegressiva (int num){
    int aux;
    for ( aux = num; aux >= 0; aux--){
        printf("%d\n", aux);
    }     
    return 1;
}

main(){
    int num;
    printf("A contagem deve iniciar de qual numero?\nInsira o numero aqui: ");
    scanf ("%d", &num);
    contagemRegressiva(num);
    return 0;
}