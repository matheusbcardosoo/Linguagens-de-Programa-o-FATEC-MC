#include <stdio.h> 
#include <conio.h> 
#include <time.h> 

int npa (void){
    static unsigned s = 0;
    auto unsigned n = (s % 100);
    s += s/10;
    while (s==0){
        s = time(NULL)%1000;
    }
    return n;
}

main(){
    while( !_kbhit()){
        printf("%d,", npa());
        _sleep(100);
    }
    return 0;
}