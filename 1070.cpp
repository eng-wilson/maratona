#include <stdio.h>

int main(){
	int n;
	int cont = 0;
	
	scanf("%d", &n);
	
	if (n > 0){
		for (int i = n; i < n + 12; i++){
			if((i % 2) != 0 && cont < 6){
				printf("%d\n", i);
				cont++;
			}
		}
		
	}
	return 0;
}
