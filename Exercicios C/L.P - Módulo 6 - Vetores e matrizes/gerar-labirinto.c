#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

void gera(char m[MAX][MAX]){
    for(int i=0; i<MAX; i++){
        for (int i2=0; i2<MAX; i2++){
            if((i==1 && i2==0) || (i==13 && i2==14)){
                m[i][i2] = 0;
            } else if (i==0 || i==14 || i2==0 || i2==14){
                m[i][i2] = 1;
            } else if ((i==13 && i2==13)||(i==0 && i2==0)){
                m[i][i2] = 0;
            } else {
                m[i][i2] = ((rand() % 100) < 75) ? 0 : 1; 
            }
        }
    }
}

int exibe (char m[MAX][MAX]){
    for (int aux=0; aux<MAX; aux++){
        for (int i=0; i<MAX; i++)
            printf("%s", m[aux][i] ? "\xDB\xDB" : "  ");
        puts(""); 
    }
}

main(){
    int m[MAX][MAX];
    srand(time(NULL));
    gera(m);
    exibe(m);
    return 0;
}