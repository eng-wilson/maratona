#include <stdio.h>

int main(){
	int n;
	int cont = 1;
	
	scanf("%d", &n);
	if (n > 1 && n < 1000){
		for (int i = 0; i < n; i++){
			printf("%d %d %d\n", cont, (cont * cont), (cont * cont * cont));
			cont++;
		}
	}
	return 0;
}
