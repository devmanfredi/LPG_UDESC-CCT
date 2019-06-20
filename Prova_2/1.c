#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor=NULL, i=0, e, soma=0;
    do {
        printf("Entre um numero inteiro, ou '0' para sair: ");
        scanf("%d", &e);
        while (getchar() != '\n'); // consome o \n em excesso no buffer
        vetor=(int *) realloc(vetor, sizeof(int)*(i+1));
        vetor[i]=e;
        i++;
    } while (e);
    for (e=0; e<i; e++) {
        printf("%d ", vetor[e]);
        soma+=vetor[e];
    }
    printf("\n%d", soma);
    free(vetor);
    return 0;
}