//Atraves do ultimo digito da placa de um veiculo é apresentado que dia ele pode estar em circulação.
//Conforme requisito do professor, foi construido utilizando switch-case.
#include <stdio.h>

main (){
	int placa, final;
	printf ("Digite os numeros da placa (sem as letras): \n");
	scanf ("%d", &placa);

	final = placa%10;

	printf ("O ultimo numero da placa e: %d\n",final);

    switch (final){
		case 1:	printf ("Pode estar no rodizio Segunda-feira!\n"); break;
		case 2:	printf ("Pode estar no rodizio Segunda-feira e Terca-Feira!\n"); break;
		case 3:	printf ("Pode estar no rodizio Terca-feira!\n"); break;
		case 4:	
		case 5:	printf ("Pode estar no rodizio Quarta-feira!\n"); break;
		case 6:	
		case 7:	printf ("Pode estar no rodizio Quinta-feira!\n"); break;
		case 9:	
        case 0: printf ("Pode estar no rodizio Sexta-feira!\n"); break;
		default: printf ("Seu veiculo esta em rodizio no momento!!!\n");
	}
	return 0;
}