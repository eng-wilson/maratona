#include <stdio.h>

int main(){
	int n;
	int cont = 0;
	int x[1000];
	
	scanf("%d", &n);
	
	for(int i = 0; i < 1000; i++){
		x[i] = cont;
		cont++;
		if(cont == n){
			cont = 0;
		}
		printf("N[%d] = %d\n", i, x[i]);
	}
	
	return 0;
}
