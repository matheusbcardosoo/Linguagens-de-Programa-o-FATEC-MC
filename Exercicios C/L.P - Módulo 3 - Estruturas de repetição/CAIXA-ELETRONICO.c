//Simula o funcionamento de um caixa eletronico, inclui as funções de depósito, saque, consulta e sair.
#include <stdio.h>
#include <stdbool.h>

main(){
    int opcao, quantia;
    double saldo = 1000;

    do { 
        printf("1-Deposito \n2-Saque \n3-Saldo \n4-Sair\n OPCAO = "); 
        scanf_s("%i", &opcao);

        switch(opcao){
            case 1: {
                printf("Voce selecionou a opcao DEPOSITO. \nEntre com o valor do deposito: "); 
                scanf_s("%i", &quantia);
                saldo += quantia;
                printf("Realizado deposito de %i\nSaldo atualizado = %f\n", quantia, saldo);
                break;
            } 
            case 2: {
                printf("Voce selecionou a opcao SAQUE. \nEntre com o valor para saque: "); 
                scanf_s("%i", &quantia);
                if(quantia > saldo){
                    printf("Saldo insuficiente!\nO saldo em conta = %f, entre com um valor igual ou menor ao saldo!\n", saldo);
                    break;
                } else {
                    saldo -= quantia;
                    printf("Realizado saque de %i\nSaldo atualizado = %f\n", quantia, saldo);
                    break;
                }
            }
            case 3: {
                printf("Voce selecionou a opcao CONSULTA DE SALDO.\nSaldo atualizado = %f.\n", saldo); 
                break;
            }
            case 4: {
                printf("Voce selecionou SAIR\nEncerrando aplicacao...\n");
                return 0;
                break;
            }
            default: {
                ("Voce selecionou uma OPCAO INVALIDA, entre com uma opcao valida!\n");
                break;
            }
        }
    } while (true);
        return 0;        
}