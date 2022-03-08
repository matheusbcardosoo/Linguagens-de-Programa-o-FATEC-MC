#include <stdio.h> 
#include <conio.h> 
#include <time.h>

void sequencia (void){
    static int n=0;
    printf("%d,",n++);
}

main(){
    while ( !_kbhit()){
        sequencia();
        _sleep(100);
    }
    return 0;
}