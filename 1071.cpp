#include <stdio.h>

int main(){
	int n1;
	int n2;
	int i;
	int j;
	int soma = 0;
	
	scanf("%d %d", &n1, &n2);
	
	if (n1 > n2){
		j = n1;
		i = n2;
	}
	else{
		i = n1;
		j = n2;
	}
	
	for(int cont = i + 1; cont < j; cont++){
		if ((cont % 2) != 0){
			soma = soma + cont;
		}
	}
	printf("%d\n", soma);
}
