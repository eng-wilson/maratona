#include <stdio.h>

int main(){
	int n;
	long long int fib[61];
	int x;
	
	scanf("%d", &n);
	fib[0] = 0;
	fib[1] = 1;
	
	for(int i = 2; i < 61; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		printf("Fib(%d) = %lld\n", x, fib[x]);
	}
	
	return 0;
}
