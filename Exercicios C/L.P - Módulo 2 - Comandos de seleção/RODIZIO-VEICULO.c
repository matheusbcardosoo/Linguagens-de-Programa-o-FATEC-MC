//Atraves do ultimo digito da placa de um veiculo é apresentado que dia ele pode estar em circulação.
//Conforme requisito do professor, foi construido utilizando if-else.
#include <stdio.h>

main (){
	int placa, final;
	printf ("Digite os numeros da placa (sem as letras): \n");
	scanf ("%d", &placa);

	final = placa%10;

	printf ("O ultimo numero da placa e: %d\n",final);

	if (final == 1){
		printf ("Deve estar no rodizio Segunda-feira!\n");
	}else if (final ==2){
		printf ("Deve estar no rodizio Segunda-feira e Terca-feira!\n");
	}else if (final ==3){
		printf ("Deve estar no rodizio Terca-feira!\n");
	}else if (final == 4 || final ==5){
        printf ("Deve estar no rodizio Quarta-feira!\n");
	}else if (final == 6 || final ==7){
		printf ("Deve estar no rodizio Quinta-feira!\n");
	}else if (final == 9 || final ==0){
		printf ("Deve estar no rodizio Sexta-feira!\n");
	} else {
        printf ("Seu veiculo esta em rodizio no momento!!!\n");
    }
	return 0;
}