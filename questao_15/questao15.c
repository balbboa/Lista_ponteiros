#include <stdio.h>

//Função de comparação necessária para o uso do qsort
int compare (const void * a, const void * b)
{
  //Se o valor de a < b, a função retornará -1
  if ( *(int*)a <  *(int*)b ) return -1;
  //Se os valores a e b são iguais, a função retornará 0
  if ( *(int*)a == *(int*)b ) return 0;
  //Se o valor de a > b, a função retornará 1
  if ( *(int*)a >  *(int*)b ) return 1;
}

int main() {
    int n, i;
    float *x, aux;

    /*
        Bloco para leitura dos valores da quantidade de elementos
        que devem conter no array
     */
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    //Alocação dinâmica de memória para o array
    x = (float*)malloc(n*sizeof(float));

    //Semente para geração de valores dinâmicos
    srand(time(0));


    for (i=0; i<n; i++){
        //Gera números entre 0 e 100
        x[i] = rand()%100;
    }

    printf("Lista Desordernada: \n");

    //Impressão da lista antes da ordenação
    for (i=0; i<n; i++){
        printf("Número[%d]: - %.1f", i, x[i]);
        printf("\n");
    }

    printf("\n");

    printf("Lista Odernada: \n");


    //Ponteiro para a função compare
    void (*compare_ptd)(int) = &compare;

    //Chamada da função qsort com o ponteiro para função compare
    qsort(x, n, sizeof(int), compare_ptd);

    //Impressão da lista pós ordenação
    for (i=0; i<n; i++){
        printf("Número[%d]: - %.1f", i, x[i]);
        printf("\n");
    }

    free(x);
    return(0);
}


