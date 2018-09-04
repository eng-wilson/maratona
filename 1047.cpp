#include <stdio.h>

int main(){
	int h1;
	int m1;
	int h2;
	int m2;
	int inicio;
	int fim;
	int tempo;
	
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	
	h1 = h1 * 60.0;
	h2 = h2 * 60.0;
	
	inicio = h1 + m1;
	fim = h2 + m2;
	if (fim < inicio){
		tempo = (24*60) - inicio + (fim);
	}
	else{
		tempo = fim - inicio;	
	}
	
	
	if (tempo <= 0){
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24, 0);
		return 0;
	}
	else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (tempo / 60), (tempo % 60));
	}
	
	return 0;
}
