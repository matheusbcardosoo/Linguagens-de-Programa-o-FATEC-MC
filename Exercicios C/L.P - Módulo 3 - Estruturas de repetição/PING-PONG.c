//DESENVOLVIDO ATRAVÉS DO PELLES C POR INCOMPATIBILIDADE DE BIBLIOTECA.
#include <stdio.h> 
#include <conio.h> 
#include <time.h> 
#include <stdlib.h> 

main(){ 
    int x=1, y=1, dx= -1, dy= -1, numCor; 
    numCor = rand ()%15; 
    do { 
        _gotoxy (x,y);	 
        _textcolor(numCor); 
        printf ("O\b"); 
        _sleep(1); 
        printf ("."); 
        if( x==1 || x==80) dx = -dx; 
        if (y==1 || y==24) dy = -dy; 
        x += dx; 
        y += dy; 
        if (  x==1 || x==80 || y==1 || y==24 ){ 
            numCor = rand ()%15;			 
        }  
    } while ( !_kbhit() ); 
    return 0; 
} 