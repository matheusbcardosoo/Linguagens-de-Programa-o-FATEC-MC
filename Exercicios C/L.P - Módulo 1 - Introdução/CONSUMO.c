//CONSUMO.C - CONSUMO MÉDIO DE COMBUSTÍVEL
#include <stdio.h>

main(){
    int km, litros, media;
    printf("Informe quantos kilometros foram percorridos: \n");
    scanf("%d", &km);
    printf("Informe quantos litros de combustivel foram consumidos: \n");
    scanf("%d", &litros);
    
    media = km / litros;

    printf("O consumo medio do veiculo e de %d litros/km!\n", media);
    return 0;
}