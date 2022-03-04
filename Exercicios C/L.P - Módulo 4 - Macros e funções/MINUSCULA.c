#include <stdio.h>

int minuscula(c){
    if ((c)>= 65 && (c) <= 90){
        (c) += 32;
        return (c);
    } else if ((c)>= 97 && (c)<=122){
        return (c);
    }
}

main(){
    char letra;
    printf("Insira uma letra: \n");
    scanf ("%c", &letra);
    printf("O caractere digitado em minusculo e '%c'\n", minuscula(letra));
    return 0;
}