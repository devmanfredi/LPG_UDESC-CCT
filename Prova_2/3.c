#include <stdio.h>
#include <stdlib.h>

void mm(int *v, int n, int *max, int *min) {
    int i;
    for (i=0; i<n; i++) {
        if (*max < v[i])
            *max=v[i];
        if (*min > v[i])
            *min=v[i];
    }
}

int main() { // repetindo parte do exercício 1 para preencher o vetor
    int *vetor=NULL, i=0, e, l=0, h=0;
    do {
        printf("Entre um numero inteiro, ou '0' para sair: ");
        scanf("%d", &e);
        while (getchar() != '\n'); // consome o \n em excesso no buffer
        vetor=(int *) realloc(vetor, sizeof(int)*(i+1));
        vetor[i]=e;
        i++;
    } while (e);
    mm(vetor, i, &h, &l);
    printf("O valor minimo eh %d e o maximo eh %d", l, h);
    free(vetor);
    return 0;
}