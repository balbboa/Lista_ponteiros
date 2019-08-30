#include <stdio.h>

void soma(int *vetor1, int *vetor2, int *vetor3, int *n){
    for (int i=0; i < n; i++){
        vetor3[i] = (vetor1[i] + vetor2[i]);
    }
}

int main() {
    int n, i;

    printf("Digite o numero de elementos dos arrays: ");
    scanf("%d", &n);

    int vetor1[n], vetor2[n], vetorresultado[n];

    srand(time(0));
    printf("Vetor 1: \n");

    for (i=0; i<n; i++){
        vetor1[i] = rand()%100;
        printf("Vetor1[%d] = %d\n", i, vetor1[i]);
    }

    printf("Vetor 2: \n");

    for (i=0; i<n; i++){
        vetor2[i] = rand()%100;
        printf("Vetor2[%d] = %d\n", i, vetor2[i]);
    }

    soma(vetor1, vetor2, vetorresultado, n);

    printf("Vetor Resultado: \n");

    for (int i=0; i<n; i++){
        printf("Vetor Resultado[%d] = %d", i, vetorresultado[i]);
        printf("\n");
    }

    return(0);
}


