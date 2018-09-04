#include <stdio.h>

int main(){
	int n;
	int pa = 0;
	int pb = 0;
	int cont = 0;
	double g1 = 0.0;
	double g2 = 0.0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
		
		do{
			pa = pa * (1 + (g1 / 100));
			pb = pb * (1 + (g2 / 100));
			cont++;
		} while (pa <= pb && cont <= 100);

		if (cont <= 100){
			printf("%d anos.\n", cont);
		}
		else{
			printf("Mais de 1 seculo.\n");
		}
		cont = 0;
	}
}
