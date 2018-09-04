#include <stdio.h>

int main(){
	int inter = 0;
	int gremio = 0;
	int empate = 0;
	int grenal = 0;
	int x;
	int y;
	int opcao;
	
	do{
		scanf("%d %d", &x, &y);
		grenal++;
		if (x > y){
			inter++;
		}
		if (y > x){
			gremio++;
		}
		if (x == y){
			empate++;
		}
		do{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &opcao);	
		}while (opcao != 2 && opcao != 1);
		
	} while(opcao != 2);
	
	printf("%d grenais\n", grenal);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empate);
	if (inter > gremio){
		printf("Inter venceu mais\n");
	}
	if (gremio > inter){
		printf("Gremio venceu mais\n");
	}
	if (gremio == inter){
		printf("Nao houve vencedor\n");
	}
	
	return 0;
}
