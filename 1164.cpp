#include <stdio.h>

int main(){
	int n;
	int x;
	int soma = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		for(int j = 1; j < x; j++){
			if ((x % j) == 0){
				soma = soma + j;
			}
		}
		if (soma == x){
			printf("%d eh perfeito\n", x);	
		}
		else{
			printf("%d nao eh perfeito\n", x);
		}
		soma = 0;
	}
	return 0;
}
