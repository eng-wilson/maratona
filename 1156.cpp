#include <stdio.h>

int main(){
	
	double s = 0;
	double x = 1.0;
	double i = 1.0;
	
	do{
		s = (x / i) + s;
		x = x + 2;
		//printf("%.2lf %.2lf ", x, i);
		i = i * 2;
		//printf("%.2lf\n", s);
	} while (x < 39);
	
	printf("%.2lf\n", s);
	
	return 0;
}
