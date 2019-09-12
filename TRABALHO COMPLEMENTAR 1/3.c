#include <stdio.h>

int p2 (int n) {
    int i, p=1;
    if (n<2) {
        return 1;
    }
    for (i=1; i<=n; i++) {
        p*=2;
        printf("%d  ",p);
    }
    return 1;
}

int main()
{
    int n;
    printf("\tcalculo do n-esimo termo da sequencia\t\n");
    printf("\n");
    printf("Digite o tamanho da sequencia : ");
    scanf("%d", &n);
    printf("\n");
    printf("\tResultado\t\n");
    p2(n);
    return 1;
}
