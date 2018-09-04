#include <stdio.h>

int main(){
	float i = 0.0;
	float j = 1.0;
	int cont = 1;
	
	while (i <= 2.2){
		if (i == 0.0 || i == 1.0 || i > 2.0){
			printf("I=%.0f J=%.0f\n", i, j);
		}
		else{
				printf("I=%.1f J=%.1f\n", i, j);	
		} 
		
		
		
		j++;
		cont++;
		if (cont == 4){
			i = i + 0.2;
			
			cont = 1;
			j = j - 3 + 0.2;
		}
	}
	
	return 0;
}
