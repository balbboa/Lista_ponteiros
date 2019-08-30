#include<stdio.h>
#include<stdlib.h>

void multiplicacaoMatricial(int **ptrC, int **ptrA, int **ptrB, int numeroLinhasA, int  numeroColunasA, int numeroColunasB){
    int i,j,k;
    int aux;

    for(i=0; i < numeroLinhasA; i++){
        for(j=0; j < numeroColunasB;j++){
            aux = 0;
            for(k=0; k < numeroColunasA; k++){
                aux = aux+ ptrA[i][k]*ptrB[k][j];
            }
            ptrC[i][j] = aux;

        }
    }
}

void imprimirMatriz (int **ptrC, int nl, int nc){
    int i,j;
    for(i=0;i<nl; i++){
        for(j=0;j<nc;j++){
            printf("%d  ", ptrC[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    void (*PTR)(int*, int*,int*, int, int, int);
    PTR = &multiplicacaoMatricial;
    int i,j,k,numeroLinhasA, numeroColunasA,numeroColunasB;
    int **ptrA, **ptrB, **ptrC;

    printf("Informe o numero de linhas da Matriz A: ");
    scanf("%d", &numeroLinhasA);
    printf("Informe o numero de colunas da Matriz A: ");
    scanf("%d", & numeroColunasA);
    printf("Informe o numero de colunas da Matriz B: ");
    scanf("%d", &numeroColunasB);

    ptrA = (int**)malloc(numeroLinhasA*sizeof(int*));

    for(i=0; i<numeroLinhasA; i++){
        ptrA[i]=(int*)malloc( numeroColunasA*sizeof(int));
    }

    ptrB = (int**)malloc( numeroColunasA*sizeof(int*));
    for(i=0; i<numeroLinhasA; i++){
        ptrB[i]=(int*)malloc(numeroColunasB*sizeof(int));
    }

    ptrC = (int**)malloc(numeroLinhasA*sizeof(int*));
    for(i=0; i<numeroLinhasA; i++){
        ptrC[i]=(int*)malloc(numeroColunasB*sizeof(int));
    }

    for(i=0;i<numeroLinhasA;i++){
        for(j=0;j< numeroColunasA;j++){
            ptrA[i][j] = rand()%10;
        }
    }

    for(i=0;i< numeroColunasA;i++){
        for(j=0;j<numeroColunasB;j++){
            ptrB[i][j] = rand()%10;
        }
    }

    (*PTR)(ptrC, ptrA, ptrB, numeroLinhasA,  numeroColunasA, numeroColunasB);

    imprimirMatriz(ptrA, numeroLinhasA, numeroColunasA);
    printf("\n");
    imprimirMatriz(ptrB,  numeroColunasA,numeroColunasB);
    printf("\n");
    imprimirMatriz(ptrC, numeroLinhasA,numeroColunasB);

    for(i=0; i<numeroLinhasA; i++){
      free(ptrA[i]);
      free(ptrB[i]);
      free(ptrC[i]);
    }

    free(ptrA);
    free(ptrB);
    free(ptrC);

    return 0;
}
