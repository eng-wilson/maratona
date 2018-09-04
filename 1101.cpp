#include <stdio.h>

int main(){
	
	int m = 1;
	int n = 1;
	int soma = 0;
	
	do {
		
		
		if (n > m){
			for(int i = m; i <= n; i++){
				printf("%d ", i);
				soma = soma + i;
				
			}
			printf("Sum=%d\n", soma);
		}
		if (m > n){
			for(int i = n; i <= m; i++){
				printf("%d ", i);
				soma = soma + i;
			}
			printf("Sum=%d\n", soma);
		}
		soma = 0;
		scanf("%d %d", &m, &n);
	} while (m > 0 && n > 0);
	
	return 0;
}
