#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}

int values[] = { 40, 10, 100, 90, 20, 25 };

int main() {
  int n;

  void (*compare_ptd)(int) = &compare;

  qsort(values, 6, sizeof(int), compare_ptd);
  for (n=0; n<6; n++)
     printf ("%d ",values[n]);

  return 0;
}


/*
    Ponteiros para funções são endereços de memória
    que ao invés de apontar para dados primários ou
    estruturas de dados, apontam para o endereço de
    uma função. Assim, podemos passar uma função como
    endereço para outra.

    Para exemplificar, podemos utilizar o exemplo
    cedido para a função qsort. Nessa função, o quarto parametro
    que ela recebe é um ponteiro para função. Nesse caso,
    estamos utilizando um ponteiro para a função compare que
    permite dizer como nossa função deverá ser ordenada e
    o que usaremos na comparação.
*/
