#include <stdio.h>

int main(){
	int n;
	int x;
	int y;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		if (y != 0){
			printf("%.1f\n", (double)x / y);	
		}
		if (y == 0){
			printf("divisao impossivel\n");
		}
		
	}
	
	return 0;
}
