#include <stdio.h>

int main(){
	int n;
	int soma = 1;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		soma = soma * i;
	}
	printf("%d\n", soma);
	
	return 0;
}
