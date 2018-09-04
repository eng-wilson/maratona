#include <stdio.h>

int main(){
	float n;
	float media = 0;
	int positivo = 0;
	
	for(int i = 0; i < 6; i++){
		scanf("%f", &n);
		if(n > 0){
			positivo++;
			media = media + n;
		}
		
	}
	printf("%d valores positivos\n", positivo);
	printf("%.1f\n", (media / positivo));
	
	return 0;
}
