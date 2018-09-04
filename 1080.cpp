#include <stdio.h>

int main(){
	
	int n;
	int maior = 0;
	int pos = 0;
	
	for(int i = 1; i < 101; i++){
		scanf("%d", &n);
		if (n > maior){
			maior = n;
			pos = i;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", pos);
	
	return 0;
}
