#include <stdio.h>

int main(){
	int x;
	int z;
	int cont = 0;
	int media = 0;
	
	scanf("%d", &x);
	
	do{
		scanf("%d", &z);
	} while (z <= x);
	
	for(int i = x; i < z; i++){
		media = media + i;
		cont++;
		if (media > z){
			break;
		}
	}
	printf("%d\n", cont);
	
	return 0;
}
