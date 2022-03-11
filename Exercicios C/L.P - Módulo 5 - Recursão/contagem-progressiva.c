#include <stdio.h>

void contagemProgressiva (int num){
    int aux;
    for ( aux = 0; aux <= num; aux++){
        printf("%d\n", aux);
    }     
    return 1;
}

main(){
    int num;
    printf("A contagem deve ser ate qual numero?\nInsira o numero aqui: ");
    scanf ("%d", &num);
    contagemProgressiva(num);
    return 0;
}