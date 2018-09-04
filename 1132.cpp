#include <stdio.h>

int main(){
	
	int x;
	int y;
	int maior = x;
	int menor = y;
	int soma = 0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x > y){
		maior = x;
		menor = y;
	}
	if (y > x){
		maior = y;
		menor = x;
	}
	
	for(int i = menor; i <= maior; i++){
		if ((i % 13) != 0){
			soma = soma + i;
		}
	}
	printf("%d\n", soma);
	
	return 0;
}
