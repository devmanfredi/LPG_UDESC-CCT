#include <stdio.h>
int main(){
    int i, n=0, b;
    while (n<1) {
        scanf("%i", &n);
    }
    int A[10];
    for (i=0; i<10; i++) {
        A[i]=i;
    }
    for (i=0; i<10/2; i++) {
        b=A[i];
        A[i]=A[10-1-i];
        A[10-1-i]=b;
    }
    for (i=0; i<10; i++) {
        printf("A posicao %i contem %i \n", i, A[i]);
    }
    return 0;
}