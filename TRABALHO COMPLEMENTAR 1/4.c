#include <stdio.h>

float prod(float, float);
float soma(float, float);
float dif(float, float);
float divi(float, float);

int main()
{
    float a, b, r;
    int o;
    while (o!=5) {
        printf("\n Entre o primeiro numero: ");
        scanf("%f", &a);
        printf("Entre o segundo numero: ");
        scanf("%f", &b);
        printf("Entre '1' para produto, '2' para soma, '3' para diferenca, '4' para divisao, ou '5' para sair: ");
        scanf("%d", &o);
        switch (o) {
            case 1:
                r=prod(a, b);
                break;
            case 2:
                r=soma(a, b);
                break;
            case 3:
                r=dif(a, b);
                break;
            case 4:
                r=divi(a, b);
                break;
            case 5:
                break;
        }
        printf("O resultado da operacao eh %f", r);
    }
    
    return 0;
}

float prod(float a, float b) {
    return a*b;
}

float soma(float a, float b) {
    return a+b;
}

float dif(float a, float b) {
    return a-b;
}

float divi(float a, float b) {
    return a/b;
}