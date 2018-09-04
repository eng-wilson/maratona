#include <stdio.h>

int main(){
	int n;
	int x;
	int y;
	int soma = 0;
	int cont = 0;
	int j;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		j = x;
		do{
			if((j % 2) != 0){
				soma = soma + j;
				cont++;
			} 
			j++;
		} while(cont < y);
		printf("%d\n", soma);
		
		soma = 0;
		cont = 0;
	}
	
	return 0;
}
