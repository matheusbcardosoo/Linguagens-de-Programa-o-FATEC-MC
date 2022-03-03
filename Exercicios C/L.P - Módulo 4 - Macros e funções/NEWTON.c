#include <stdio.h>
#include <math.h>

int _2Passo (float r, float x){
    if ((pow(r,2)-x)< 0.0001){
        printf("%f\n", r);
    } else {
        r = (pow(r,2)+x)/(2*r);
        _2Passo(r,x);
    }
}

main (){
    float x, r;
    printf("Qual o valor de X? \n");
    scanf ("%f", &x);
    r = x/2;
    _2Passo(r, x);
    return 0;
}

