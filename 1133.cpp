#include <stdio.h>

int main(){
	
	int x;
	int y;
	int maior = x;
	int menor = y;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x > y){
		maior = x;
		menor = y;
	}
	if (y > x){
		maior = y;
		menor = x;
	}
	
	for(int i = menor + 1; i < maior; i++){
		if ((i % 5) == 2 || (i % 5) == 3){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
