#include <stdio.h>

int main(){
	int a;
	int n;
	int soma = 0;
	
	scanf("%d", &a);
	do{
		scanf("%d", &n);
	} while (n <= 0);
	
	for(int i = a; i < a + n; i++){
		soma = soma + i;
	}
	printf("%d\n", soma);
	
	return 0;
}
