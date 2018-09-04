#include <stdio.h>

int main(){
	
	int n;
	int x;
	int cont = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		for(int j = 1; j < x; j++){
			if((x % j) == 0){
				cont++;
			}
		}
		if (cont == 1){
			printf("%d eh primo\n", x);
		}
		else{
			printf("%d nao eh primo\n", x);
		}
		cont = 0;
	}

	return 0;
	
}
