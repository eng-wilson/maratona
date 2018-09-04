#include <stdio.h>

int main(){
	int x[20];
	int y;
	
	for(int i = 0; i < 20; i++){
		scanf("%d", &x[i]);
	}
	for(int i = 0; i < 10; i++){
		y = x[i];
		x[i] = x[19 - i];
		x[19 - i] = y;
		
	}
	for(int i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, x[i]);
	}
	
	return 0;
}
