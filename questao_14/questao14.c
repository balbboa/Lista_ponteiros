#include <stdio.h>

int main() {
    int n, i;
    float *x, aux;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    x = (float*)malloc(n*sizeof(float));

    srand(time(0));

    for (i=0; i<n; i++){
        x[i] = rand()%100;
    }

    printf("Lista Desodernada: \n");

    for (i=0; i<n; i++){
        printf("Número[%d]: - %.1f", i, x[i]);
        printf("\n");
    }

    printf("\n");

    printf("Lista Odernada: \n");

    for (i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (x[i] < x[j]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
        }
      }
    }


    for (i=0; i<n; i++){
        printf("Número[%d]: - %.1f", i, x[i]);
        printf("\n");
    }

    free(x);
    return(0);
}

/*
    Nesse código para evitar redigitar os valores a cada
    execução, estou usando a função rand() para gerar valores
    aleatórios.
*/



