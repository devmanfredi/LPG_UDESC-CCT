#include <stdio.h>

//Protótipos
float prod(float, float);
float soma(float, float);
float dif(float, float);
float divi(float, float);

int main()
{
    float a, b, r;
    int o;
    while (o!=5) {
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &a);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &b);
        printf("PRODUTO : 1\n");
        printf("SOMA : 2\n");
        printf("DIFERENCA : 3\n");
        printf("DIVISAO : 4\n");
        printf("SAIR : 5\n");
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
