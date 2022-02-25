//Dados coeficientes de uma equação de 2º grau, é informado as raizes reais (se existirem).
#include <stdio.h>
#include <math.h>

main(){
    int a, b, c, x1, x2, delta;
    printf("Informe os coeficientes a, b e c: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a == 0) {
		return 0;
	}else{
        delta = (b*b)-(4*a*c);
        if(delta >= 0){

            x1 = (-(b) + sqrt(delta)/(2*a));
            x2 = (-(b) - sqrt(delta)/(2*a));

            printf("delta = %i\n",delta);
            printf("X1 = %i\n",x1);
            printf("X2 = %i\n",x2);
        } else {
            printf("Nao existe raiz");
        }
    }
    return 0;
}