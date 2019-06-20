#include <stdio.h>

int main()
{
    int i, v=0;
    char frase[100], c;
    printf("Digite uma string de ate 100 caracteres: ");
    gets(frase);
    for (i=0; i<strlen(frase); i++) {
        c=frase[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            v++;
        }
    }
    printf("%s tem %d vogais", frase, v);

    return 0;
}
