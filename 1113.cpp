#include <stdio.h>

int main(){
	int x;
	int y;
	
	do{
		scanf ("%d %d", &x, &y);
		if (x > y){
			printf("Decrescente\n");
		}
		if (y > x){
			printf("Crescente\n");
		}
		
	} while (x != y);
	
	return 0;
}
