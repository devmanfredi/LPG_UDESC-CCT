#include <stdio.h>

int main()
{
    int i, j, d=0, s=0, M[8][8];
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            M[i][j]=rand()/3270;
        }
    }
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            printf("\t%d", M[i][j]); // "\t" alinha os números na tela"
            if (j>i) {
                s += M[i][j];
            }
        }
        d += M[i][i];
        printf("\n"); // quebra de linha ao imprimir cada linha da matriz
    }
    printf("A soma da diagonal principal eh igual a %d \n", d);
    printf("A somatoria superior eh igual a %d", s);

    return 0;
}