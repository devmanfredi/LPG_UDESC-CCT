#include <stdio.h>

int main()
{
    int i, v=0;
    char frase[100], c;
    printf("Digite uma string de ate 100 caracteres: ");
    gets(frase);
    for (i=0; i<strlen(frase)/2; i++) {
        if (frase[i]==frase[strlen(frase)-1-i]) { // compara os caracteres nos dois sentidos subtraindo o '\0'
            v++;
        }
    }
    if (v==i) {
        printf("%s eh palindrome!", frase);
    } else {
        printf("%s nao eh palindrome.", frase);
    }

    return 0;
}
