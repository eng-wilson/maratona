#include <stdio.h>

int main(){
	int n;
	int input;
	int in = 0;
	int out = 0;
	
	scanf("%d", &n);
	
	if (n < 10000){
		for (int i = 0; i < n; i++){
			scanf("%d", &input);
			if(input >=10 && input <= 20){
				in++;
			}
			else{
				out++;
			}
		}
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
}
