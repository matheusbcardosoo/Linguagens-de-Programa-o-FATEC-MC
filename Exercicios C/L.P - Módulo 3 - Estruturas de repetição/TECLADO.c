//Devolve verdade se o usuario clicar em algum caractere no teclado e apresenta qual foi a tecla pressionada.
//DESENVOLVIDO ATRAVÉS DO PELLES C POR INCOMPATIBILIDADE DE BIBLIOTECA.
#include <stdio.h> 
#include <conio.h> 

main() { 
    printf ("Exercicio 9 - Teclado"); 
    printf ("\nTesta se o usuario digitou algo\n"); 
    while ( !_kbhit() ){ 
        _cputs ("Aperte algo =)\n"); 
        printf ("O usuario pressionou a tecla: %c\n", _getch()); 
    } 
    return 0; 
} 