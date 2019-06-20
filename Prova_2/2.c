#include <stdio.h>
#include <string.h>
#define MAX 100 // define tamanho máximo da string

int main() {
    char str[MAX];
    FILE *arquivo;
    do {
        printf("Entre uma string ou '=' para terminar: ");
        fgets(str, MAX, stdin);
        arquivo=fopen("strings.txt", "a");
        fwrite(&str, strlen(str), 1, arquivo);
        fclose(arquivo);  
    } while (strcmp(str, "=\n")); // lembrar que a função fgets sempre adiciona um retorno de linha na string
    return 0;
}