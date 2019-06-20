#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100 // define o tamanho máximo da string

int* f(char *str, char c) {
    int i, *saida=malloc(strlen(str));
    for (i=0; i<strlen(str); i++)
        saida[i]=(str[i] == c);
    return saida;
}

/* o abaixo não foi cobrado mas serve somente para testar a função*/
int main() {
    int i, *v;
    char frase[MAX], letra;
    printf("Entre uma string: ");
    fgets(frase, MAX, stdin);
    printf("Entre um caractere: ");
    letra=getchar();
    v=f(frase, letra);
    for (i=0; i<strlen(frase)-1; i++) // descontar o retorno de linha adicionado por fgets
        printf("%d ", v[i]);
    free(v);
    return 0;
}