#include <stdio.h>
#include "lib.h"

int main() {
    int o, n,i;
    float a, b;
    printf("\tCALCULADORA E FIBONACCI\t\n");
    printf("\n");
    printf("1 -> PRODUTO\n");
    printf("2 -> SOMA\n");
    printf("3 -> DIFERENCA\n");
    printf("4 -> DIVISAO\n");
    printf("5 -> FIBONACCI\n");
    scanf("%d", &o);
    if (o != 5) {
        printf("Digite o primeiro: ");
        scanf("%f", &a);
        printf("Digite o segundo: ");
        scanf("%f", &b);
    }
    switch (o) {
        case 1:
            printf("Resultado : %f", prod(a, b));
            break;
        case 2:
            printf("Resultado : %f", soma(a, b));
            break;
        case 3:
            printf("Resultado : %f", dif(a, b));
            break;
        case 4:
            printf("%Resultado : f", divi(a, b));
            break;
        case 5:
        	printf("\n");
            printf("Digite o tamanho da sequencia: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++){
    			printf("%d ", fib(i));
			}
            break;
    }

    return 0;
}
