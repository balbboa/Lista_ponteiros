#include <iostream>

using namespace std;

int main(){
  int vet[] = {4,9,13};
  int i;

  for(i=0;i<3;i++){
    printf("%d ", *(vet+i));
  }

    printf("\n");
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }

}

/*
    A expressão *(vet+i) retorna os valores do
    array que está sendo percorrido.

    Já vet+i retorna os endereços de memória para
    as respectivas posições.

*/



