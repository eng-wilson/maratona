#include <stdio.h>

int main(){
	double n;
	double x[100];
	
	scanf("%lf", &n);
	x[0] = n;
	printf("N[0] = %.4lf\n", n);
	
	for(int i = 1; i < 100; i++)
	{
		x[i] = x[i - 1] / 2;
		printf("N[%d] = %.4lf\n", i, x[i]);

	}
	
	return 0;
}
