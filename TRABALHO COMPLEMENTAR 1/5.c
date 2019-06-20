#include <stdio.h>
#include "lib.h"

int main() {
    int o, n;
    float a, b;
    printf("Aqui o patrao eh vc. Quer produto [1], soma [2], diferenca [3], divisao [4] ou um numero da serie de Fibonacci [5] ? ");
    scanf("%d", &o);
    if (o != 5) {
        printf("Entre o primeiro: ");
        scanf("%f", &a);
        printf("Entre o segundo: ");
        scanf("%f", &b);
    }
    switch (o) {
        case 1:
            printf("%f", prod(a, b));
            break;
        case 2:
            printf("%f", soma(a, b));
            break;
        case 3:
            printf("%f", dif(a, b));
            break;
        case 4:
            printf("%f", divi(a, b));
            break;
        case 5:
            printf("Entre o numero da sequencia: ");
            scanf("%d", &n);
            printf("%d", fib(n));
            break;
    }

    return 0;
}