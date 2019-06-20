#include<stdio.h>
void Maiuscula(char*, int);
int main() {
    char c[100];
    gets(c);
    Maiuscula(c, strlen(c));
    printf("%s", c);
}
void Maiuscula(char *str, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        str[i]=toupper(str[i]);
    }
}
