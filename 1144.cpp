#include <stdio.h>

int main(){
	
	int n;
	int cont = 1;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("%d %d %d\n", cont, (cont * cont), (cont * cont * cont));
		printf("%d %d %d\n", cont, (cont * cont) + 1, (cont * cont * cont) + 1);
		cont++;
	}
	
	return 0;
}
