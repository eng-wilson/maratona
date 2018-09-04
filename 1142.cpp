#include <stdio.h>

int main(){
	int n;
	int cont = 1;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("%d ", cont);
		cont++;
		printf("%d ", cont);
		cont++;
		printf("%d ", cont);
		cont = cont + 2;
		printf("PUM\n");
	}
	
	return 0;
}
