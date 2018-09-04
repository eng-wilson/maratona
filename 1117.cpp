#include <stdio.h>

int main(){
	double x;
	double media;
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
	} while (cont != 2);
	
	printf("media = %.2lf\n", media / 2);
	
	return 0;
}
