#include <stdio.h>

int main(){
	int x = 0;
	
	while(x != 2002){
		scanf("%d", &x);
		if (x != 2002){
			printf("Senha Invalida\n");	
		}	
	} 
	printf("Acesso Permitido\n");
	
	return 0;
}
