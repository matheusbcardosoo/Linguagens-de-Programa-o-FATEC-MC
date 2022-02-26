//#RASTRO.C - ATIVA/DESATIVA E POSSIBILITA SELECIONAR UMA NOVA COR AO RASTRO.
//DESENVOLVIDO ATRAVÉS DO PELLES C POR INCOMPATIBILIDADE DE BIBLIOTECA.
#include <stdio.h> 
#include <conio.h> 
#include <ctype.h>
#include <stdlib.h> 
main (){ 
    int tecla, col=40, lin=12, cor, corbkp, desativa=0; 
    printf ("Pressione '1' para selecionar a cor do rastro!\n"); 
    scanf ("%d", &tecla); 
    if (tecla == 1) { 
        printf ("Insira o numero da cor (Entre 0 e 15)\n"); 
        scanf ("%d", &cor); 
        corbkp = cor; 
        if (cor >= 0 && cor <= 15){ 
            _textcolor (cor); 
            printf ("Essa foi a cor selecionada!\n"); 
        } else { 
            printf ("Digite um numero valido! (Entre 0 e 15)\n"); 
            scanf ("%d", &cor); 
            _textcolor (cor); 
            printf ("Essa foi a cor selecionada!\n"); 
        } 
    }else{ 
        cor = 15; 
    } 
    while (1) { 
        _gotoxy(col,lin); 
        _putch(219); 
        _textcolor (cor); 
        switch ( toupper (_getch()) ){ 
            case 'W': if (lin> 10) lin--; break; 
            case 'S': if (lin< 34) lin++; break; 
            case 'D': if (lin< 80) col++; break; 
            case 'A': if (lin> 1) col--; break;  
            case '/': if (cor > 0) cor = 0; break; 
            case ';': if (cor == 0) cor = corbkp ; break; 
            case 'F': exit (1); 
        } 
    } 
    return 0; 
} 