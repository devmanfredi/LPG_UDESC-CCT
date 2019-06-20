#include <stdio.h>

int fib(int n) {
    if (n<=2) {
        return 1;
    }
    int a = fib(n-2);
    int b = fib(n-1);
    return a+b;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", fib(n));

    return 0;