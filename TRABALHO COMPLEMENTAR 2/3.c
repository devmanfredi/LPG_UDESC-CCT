#include <stdio.h>

int main()
{
    int i, j, ApassaB=0;
    float a=90000000, b=200000000, p[20][2], t[2]={1.03, 1.015};
    p[0][0]=a*t[0];
    p[0][1]=b*t[1];
    for (i=1; i<20; i++) {
        for (j=0; j<2; j++) {
            p[i][j]=p[i-1][j]*t[j];
        }
    }
    for (i=0; i<20; i++) {
        for (j=0; j<2; j++) {
            printf("\t%.0f", p[i][j]); // o "\t" é para alinhar os números na tela, e ".0f" imprime os números com 0 casas decimais
        }
        if (p[i][0]>p[i][1] && !ApassaB) {
            ApassaB=i+1;
        }
        printf("\n"); // quebra de linha ao imprimir cada linha da matriz
    }
    if (ApassaB) {
        printf("A populacao do pais A supera a do B em %d anos.", ApassaB);
    } else {
        printf("A populacao do pais A nao supera a do B nos proximos 20 anos.");
    }

    return 0;
}