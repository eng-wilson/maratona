#include <stdio.h>

int main(){
	int n;
	float num1;
	float num2;
	float num3;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%f %f %f", &num1, &num2, &num3);
		printf("%.1f\n", (num1 * 2 + num2 * 3 + num3 * 5)/ 10);
	}
	
	return 0;
}
