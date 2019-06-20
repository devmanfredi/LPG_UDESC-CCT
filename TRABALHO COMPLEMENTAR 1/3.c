#include <stdio.h>

int p2 (int n) {
    int i, p=1;
    if (n<2) {
        return 1;
    }
    for (i=1; i<n; i++) {
        p*=2;
    }
    return p;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", p2(n));