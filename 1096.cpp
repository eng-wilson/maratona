#include <stdio.h>

int main(){
	int i = 1;
	int j = 7;
	int cont = 1;
	
	while (i <= 9){
		printf("I=%d J=%d\n", i, j);
		j = 7 - cont;
		cont++;
		if (cont == 4){
			i = i + 2;
			cont = 1;
			j = 7;
		}
	}
	
	return 0;
}
