#include <stdio.h>
int fatorial (x) {
    if (x==1) {
        return 1;
    }
    return x*fatorial(x-1);
}
int main() {
    int n, i;
    scanf("%i", &n);
    if ((n<1)||(n>10)) {
        printf("Erro! O valor deve estar entre 1 e 10!");
        return 0;
    }
    for (i=1; i<=n; i++) {
        printf("O fatorial de %i eh %i\n", i, fatorial(i));
    }
    return 0;
}