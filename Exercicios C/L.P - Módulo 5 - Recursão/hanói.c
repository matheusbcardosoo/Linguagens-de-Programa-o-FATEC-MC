#include <stdio.h>
#include <stdlib.h>

void hanoi (int num, char a, char b, char c){
    if (num == 1){
        printf("Mova o disco %d de %c para %c\n", num, a, b);
    } else {
        hanoi (num-1, a, c ,b);
        printf("Mova o disco %d de %c para %c\n", num, a, b);
        hanoi (num-1, c, b, a);
    }
}

main (){
    int num;
    printf("Qual a quantidade de discos?\nDigite o numero aqui: ");
    scanf("%d", &num);
    hanoi(num, 'A', 'B', 'C');
    return 0;
}