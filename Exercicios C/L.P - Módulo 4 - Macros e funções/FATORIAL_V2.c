#include <stdio.h>
#include <math.h>

int fatorial (n, fat){
    for (fat = 1; n > 1; n--){
        fat *=n;
    }
    return fat;
}

main(){
    int n, fat;
    printf("Insira um numero para calcular o fatorial:\n");
    scanf("%d", &n);
    printf("Fatorial = %d\n", fatorial(n, fat));
    return 0;
}