#include <stdio.h>

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else{
    	return fib(n - 1) + fib(n - 2);	
	}
    
}

int main()
{
    int n,i;
    printf("\tSerie Fibonacci\t\n");
    printf("\n");
    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);
    printf("\tResultado\t\n");
    for (i = 0; i < n; i++){
    	printf("%d ", fib(i));
	}
    

    return 0;
}
