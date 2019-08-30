#include <iostream>

using namespace std;

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d \n",i);
    printf("vet[%d] = %.1f \n",i, vet[i]);
    printf("*(f + %d) = %.1f \n",i, *(f+i));
    printf("&vet[%d] = %X \n",i, &vet[i]);
    printf("(f + %d) = %X \n",i, f+i);
  }
}

/*
    O vetor abaixo mostra os valores dispostos
    no array de floats e as respectivas posições de
    memória para cada um. As posições de memória
    devem variar de acordo com cada execução.

    Legenda:
        i = indice do array sendo percorrido
        vet[i] = elemento do array sendo percorrido
        *(f+i) = elemento do array sendo percorrido
        &vet[i] = posição da memória do elemento atual
        f+1 = posição de memória do elemento atual (ponteiro para o array vet);

    i = 0
    vet[0] = 1.1
    *(f + 0) = 1.1
    &vet[0] = C3A1A500
    (f + 0) = C3A1A500

    i = 1
    vet[1] = 2.2
    *(f + 1) = 2.2
    &vet[1] = C3A1A504
    (f + 1) = C3A1A504

    i = 2
    vet[2] = 3.3
    *(f + 2) = 3.3
    &vet[2] = C3A1A508
    (f + 2) = C3A1A508

    i = 3
    vet[3] = 4.4
    *(f + 3) = 4.4
    &vet[3] = C3A1A50C
    (f + 3) = C3A1A50C

    i = 4
    vet[4] = 5.5
    *(f + 4) = 5.5
    &vet[4] = C3A1A510
    (f + 4) = C3A1A510
*/



