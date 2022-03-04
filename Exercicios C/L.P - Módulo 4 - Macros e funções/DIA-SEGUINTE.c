//Recebe uma data e se ela for válida retorna a data do dia seguinte.
#include <stdio.h>

int valida (int d, int m, int a){
    if (m==2 && bissexto(a) == 1 && (d>29 || d<1)){
        return 0;
    } else if (m==2 && bissexto(a)==0 && (d>28 || d<1)){
        return 0;
    }
    switch (m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
            if (d>31 || d< 1){
                puts ("Data invalida!\n");
                return 0;
            }
            break;
        }
        case 4: case 6: case 9: case 11:{
            if (d>30 || d<1){
                puts ("Data invalida!\n");
                return 0;
            }
            break;
        }
        default: puts ("Data invalida!\n");
        break;
    }

    if(m > 12 || m < 1 || a < 1 ){
        return 0;
    } else {
        return 1;
    }
}

int ultimo_dia(int m, int a){
    switch (m){
        case 1: case 3: case  5: case  7: case  8: case  10: case  12: return 31; break;
        case 4: case 6: case 9: case 11: return 30; break;
        case 2: {
            if (bissexto(a) == 1) {
                return 29;
            } else {
                return 28;
            }
            break;
        }
    } 
}

int bissexto (int a){
        if (a % 400 == 0){
            return 1;
        } else if ((a % 4 == 0) && (a % 100 != 0)){
            return 1;
        } else {
            return 0;
        }
}

int _exibeDiaSeguinte (int d, int m, int a){
        switch (m){
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10: {
                if (d == 31){
                    m += 1;
                    d = 1;
                } else {
                    d += 1;
                }
                printf("O proximo dia e: %d/%d/%d\n", d, m, a);
                break;
            }
            case 4: case 6: case 9: case 11: {
                if (d == 30){
                    m += 1;
                    d = 1;
                } else {
                    d += 1;
                }
                printf("O proximo dia e: %d/%d/%d\n", d, m, a);
                break;
            }
            case 2: {
                if ((bissexto(a) == 1) && (d < 29)){
                    d += 1;
                    printf("O proximo dia e: %d/%d/%d\n", d, m, a);
                    return 0;
                } else if ((bissexto(a) == 1) && (d == 29)){
                    m += 1;
                    d = 1;
                    printf("O proximo dia e: %d/%d/%d\n", d, m, a);
                    return 0;
                } else if ((bissexto(a) == 0) && (d < 28)){
                    d += 1;
                    printf("O proximo dia e: %d/%d/%d\n", d, m, a);
                    return 0;
                } else if ((bissexto(a) == 0) && (d == 28)){
                    m += 1;
                    d = 1;
                    printf("O proximo dia e: %d/%d/%d\n", d, m, a);
                    return 0;
                } else if ((m == 12) && (d == 31)){
                    m = 1;
                    d = 1;
                    a += 1;
                    printf("O proximo dia e: %d/%d/%d\n", d, m, a);
                    return 0;
                }
                break;
            }
        }
    }

main (){
    int dia, mes, ano;
    printf ("Insira um data no formato (DD/MM/AAAA) separando os elementos com '/'\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (valida(dia,mes,ano) == 1){
        printf("Data valida!\nO ultimo dia desse mes e: %d\n", ultimo_dia(mes,ano));
        if (bissexto(ano)==1){
            printf ("Esse ano e bissexto!\n");
        } else {
            printf ("Esse ano nao e bissexto!\n");
        }
        _exibeDiaSeguinte(dia, mes, ano);
    }
    return 0;
}