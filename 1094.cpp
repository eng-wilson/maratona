#include <stdio.h>

int main(){
	int n;
	int valor;
	char cobaia;
	double total = 0;
	double coelho = 0;
	double rato = 0;
	double sapo = 0;
	double med1;
	double med2;
	double med3;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++){
		scanf("%d %c", &valor, &cobaia);
	//	if(valor >=1 && valor <= 15){
			total = total + valor;
			if (cobaia == 'C'){
				coelho = coelho + valor;
			}
			if (cobaia == 'S'){
				sapo = sapo + valor;
			}
			if (cobaia == 'R'){
				rato = rato + valor;
			}	
//		}
		
	}
	med1 = (coelho * 100) / total;
	med2 = (rato*100) / total;
	med3 = (sapo*100) / total;
	
	printf("Total: %.0lf cobaias\n", total);
	printf("Total de coelhos: %.0lf\n", coelho);
	printf("Total de ratos: %.0lf\n", rato);
	printf("Total de sapos: %.0lf\n", sapo);
	printf("Percentual de coelhos: %.2lf %%\n", med1);
	printf("Percentual de ratos: %.2lf %%\n", med2);
	printf("Percentual de sapos: %.2lf %%\n", med3);
	
	return 0;
}
