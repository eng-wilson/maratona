#include <stdio.h>

int main(){
	int n;
	int x;
	int y;
	int soma = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		if (y > x){
			for(int j = x + 1; j < y; j++){
				if((j % 2) != 0){
					soma = soma + j;
				}
			}
		}
		if (x > y){
			for(int j = y + 1; j < x; j++){
				if((j % 2) != 0){
					soma = soma + j;
				}
			}
		}
		printf("%d\n", soma);
		soma = 0;
	}
	return 0;
}
