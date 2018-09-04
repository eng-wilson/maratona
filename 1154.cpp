#include <stdio.h>

int main(){
	int n = 0;
	int media = 0;
	int cont = 0;
	
	while (n >= 0){
		scanf("%d", &n);
		if (n >= 0){
			media = media + n;
			cont++;	
		}
		
	}
	printf("%.2lf\n", (double)media / cont);
	
	return 0;
}
