#include <iostream>

using namespace std;

int main() {
  int pulo[5]={2,4,6,8,10};

    printf("%d\n",*(pulo + 2));
    printf("%d\n",*(pulo + 4));
    printf("%d\n",pulo + 4);
    printf("%d\n",pulo + 2);


  return(0);
}

/*
    De acordo com o código definido acima, o único valor
    que referencia a terceira posição do vetor é *(pulo + 2)
*/



