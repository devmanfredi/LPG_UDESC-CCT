#include <stdio.h>
int MultipRec(n1, n2) {
    if((n1==0)||(n2==0)) {
        return 0;
    }
    if (n1==1) {
        return n2;
    }
    return n2+MultipRec(n1-1, n2);
}
int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    printf("O produto de %i e %i eh %i", a, b, MultipRec(a, b));
    return 0;
}