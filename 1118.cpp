#include <stdio.h>

int main(){
	double x;
	double media;
	int opcao;
	int cont = 0;
	
	do{
		scanf("%lf", &x);
		if (x >= 0.0 && x <= 10.0)
		{
			media = media + x;
			cont++;
		}
		if (x < 0 || x > 10){
			printf("nota invalida\n");
		}
		if (cont == 2){
			printf("media = %.2lf\n", media / 2);
			do{
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &opcao);
			}while (opcao != 1 && opcao != 2);
			cont = 0;
			media = 0;
		}
	} while (opcao != 2);
	
	
	
	return 0;
}
