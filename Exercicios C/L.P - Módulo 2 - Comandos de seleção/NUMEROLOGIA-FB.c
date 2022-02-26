//Numerologia do Facebook - Supõe o perfil de uma pessoa com base na sua data de nascimento.
#include <stdio.h>  

main(){
    int dia, mes, ano, data, digitoIni, digitoFim, somaDig, perfil;

    printf("Insira a sua data de nascimento (DD/MM/AAAA): \n");
    scanf("%i %i %i", &dia, &mes, &ano);

    data = (dia * 100) + mes + ano;

    if (data > 0){
        digitoFim = data % 100;
        digitoIni = data / 100;
        somaDig = digitoIni + digitoFim;
    }
    perfil = somaDig % 5;
    printf("Seu perfil e = %i\n", perfil);

    switch(perfil){
        case 0: puts("Significa que voce e timido"); break;
        case 1: puts("Significa que voce e sonhador"); break;
        case 2: puts("Significa que voce e paquerador"); break;
        case 3: puts("Significa que voce e atraente"); break;
        case 4: puts("Significa que voce e irresistivel"); break;
        default: puts("Perfil nao identificado :/"); break;
    }
    return 0;
}