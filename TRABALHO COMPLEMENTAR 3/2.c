#include<stdio.h>
int main() {
    char c;
    int i=0, a;
    char *p=(char *)malloc(1);
    do {
        do {
            printf("\nEntre o caractere %d: ", i);
            scanf("%c", &c);
        } while (c=='\n' || c=='\r');
        p[i]=c;
        i++;
        p=(char *)realloc(p, i+1);
    } while (c != '=');
    p[i-1]='\0';
    printf("%s", p);
    free(p);
    return 0;
}
