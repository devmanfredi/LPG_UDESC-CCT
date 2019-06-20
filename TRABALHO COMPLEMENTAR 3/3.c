#include<stdio.h>
int main() {
    int i=1, t, j, k;
    int *vetInt=0, *h, **pVetInt;
    while(1) {
        printf("Entre o %d.o numero inteiro. Para encerrar a serie, entre 0: ", i);
        scanf("%d", &t);
        if (t) {
            vetInt=(int *) realloc(vetInt, sizeof(int)*i);
            vetInt[i-1]=t;
            i++;
        }
        else {
            pVetInt=(int **) malloc(sizeof(int)*(i-1));
            for (j=0; j<=i-2; j++) {
                pVetInt[j]=&vetInt[j];
            }
            /*ordenação*/
            for (j=0; j<=i-3; j++) {
                for (k=j+1; k<=i-2; k++) {
                    if (*pVetInt[j]>*pVetInt[k]) {
                        h=pVetInt[j];
                        pVetInt[j]=pVetInt[k];
                        pVetInt[k]=h;
                    }
                }
            }
            printf("Indice\t\tvetInt\t\tpVetInt\n");
            for (j=0; j<=i-2; j++) {
                printf("%d\t\t", j);
                printf("%d\t\t", vetInt[j]);
                printf("%x contem %d\n", (int) pVetInt[j], *pVetInt[j]);
            }
            free(vetInt);
            free(pVetInt);
            return 0;
        }
    }
}