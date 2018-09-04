#include <stdio.h>

int main(){
	
	int alcool = 0;
	int gasolina = 0;
	int diesel = 0;
	int opcao = 0;
	
	do{
		do{
			scanf("%d", &opcao);
		} while(opcao < 1 || opcao > 4);
		if (opcao == 1){
			alcool++;
		}
		if (opcao == 2){
			gasolina++;
		}
		if (opcao == 3){
			diesel++;
		}
		
	}while (opcao != 4);
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	return 0;
}
