//DISTANCIA.C - Calcula a distancia entre dois pontos
#include <stdio.h>
#include <math.h>

main(){
    int p1, q1, p2, q2;
	float dist;

	printf("Informe as coordenadas para o primeiro ponto: \n");
	scanf("%i %i", &p1, &q1);
	printf("Informe as coordenadas para o segundo ponto: \n");
    scanf("%i %i", &p2, &q2);
	
	dist = sqrt( pow(p2-p1,2) + pow(q2-q1, 2) );

	printf("A distancia entre os pontos = %f\n", dist);
    return 0;
}