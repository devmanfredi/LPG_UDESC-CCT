#include <stdio.h>

int main()
{
    int n, i;
    printf("Quantos numeros impares deseja imprimir?\n");
    scanf("%d", &n);
    for (i=1; i<=n*2; i+=2) {
        printf("%d ", i);
    }
    return 0;
}
