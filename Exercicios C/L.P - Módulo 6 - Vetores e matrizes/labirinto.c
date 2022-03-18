#include <stdio.h>
#define MAX 8

int exibe (int m[MAX][MAX]){
    for (int aux=0; aux<8; aux++)
        for (int i=0; i<8; i++){
            printf("%s", m[aux][i] ? "\xDB \xDB" : "  ");
        puts(""); 
    }
}

main(){
    int m[MAX][MAX] =   {{1,1,1,1,1,1,1,1}, 
                        {0,0,1,0,0,0,0,1}, 
                        {1,0,1,0,1,0,1,1}, 
                        {1,0,1,0,1,0,0,1}, 
                        {1,0,0,0,1,1,0,1}, 
                        {1,0,1,0,0,1,0,1}, 
                        {1,0,1,0,1,1,0,0},
                        {1,1,1,1,1,1,1,1}};
    exibe(m);
    return 0; 
}