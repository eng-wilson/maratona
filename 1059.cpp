#include <stdio.h>

int main(){
	
	for(int i = 2; i < 101; i++){
		if ((i % 2) == 0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
