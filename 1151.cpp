#include <stdio.h>

int main(){
	int n;
	int a = 0;
	int b = 1;
	int cont = 0;
	
	scanf("%d", &n);
	
	if (n > 0 && n < 46){
		for(int i = 0; i < n; i++){
			if (i < 1){
				printf("%d", a);
			}
			if (i == 1){
				printf(" %d", b);
			}
			if (i > 1){
				printf(" ");
				cont = a + b;
				printf("%d", cont);
				a = b;
				b = cont;
				if (i == n - 1){
					printf("\n");
				}
			}
		}
	}
	
	return 0;
}
