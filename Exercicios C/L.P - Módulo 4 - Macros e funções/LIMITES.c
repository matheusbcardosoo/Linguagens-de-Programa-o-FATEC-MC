//Adição de diretivas #define para compilação de um programa.
#include <stdio.h>
#define MIN_INT -2147483648
#define MAX_INT 2147483647

main(){
    printf("Inteiro MINIMO = %+d\n", MIN_INT);
    printf("Inteiro MAXIMO = %+d\n", MAX_INT);
    return 0;
}