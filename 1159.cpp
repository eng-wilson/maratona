#include <stdio.h>

int main(){
	int x = 1;
	int soma = 0;
	int cont = 0;
	int j;
	
	
	while (x != 0){
		scanf("%d", &x);
		j = x;
		do{
			if((j % 2) == 0){
				soma = soma + j;
				cont++;
			} 
			j++;
		} while(cont < 5);
		if (x != 0){
			printf("%d\n", soma);
		}
		
		
		soma = 0;
		cont = 0;
	}
	
	return 0;
}
