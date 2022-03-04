#include <stdio.h>
#include <math.h>

int fatorial (num, fat){
    for(fat = 1; num > 1; num--){
        fat *= num;
    }
    return fat;
}

main (){
    int num, fat;
    printf("Insira um numero para calcular o fatorial: \n");
    scanf("%d", &num);
    printf("Fatorial = %d\n", fatorial(num,fat));
    return 0;
}