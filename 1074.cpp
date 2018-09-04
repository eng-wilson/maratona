#include <stdio.h>

int main(){
	int n;
	int val;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &val);
		if (val == 0){
			printf("NULL\n");
		}
		else{
			if((val % 2) == 0 && val > 0){
				printf("EVEN POSITIVE\n");
			}
			if ((val % 2) != 0 && val > 0){
				printf("ODD POSITIVE\n");
			}
			if((val % 2) == 0 && val < 0){
				printf("EVEN NEGATIVE\n");
			}
			if ((val % 2) != 0 && val < 0){
				printf("ODD NEGATIVE\n");
			}
		}
	}
	
	return 0;
}
