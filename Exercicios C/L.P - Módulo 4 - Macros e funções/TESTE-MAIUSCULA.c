#include <stdio.h>
#define maiuscula(c) ((c)>= 65 && (c)<=90)

main(){
    char letra;
    printf("Entre com um caractere: \n");
    scanf("%c", &letra);
    printf("A letra e MAIUSCULA? %s\n", maiuscula(letra) ? "Sim!" : "Nao!");
    return 0;
}