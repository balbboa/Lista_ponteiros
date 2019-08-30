#include <iostream>

using namespace std;

int main() {
    int mat[4];
    int *p, x;

    p = mat + 1;

    printf("%x\n", p);

    //p = mat++;
    //printf("%x\n", p);

    //p = ++mat;
    //printf("%x\n",++mat);

    x = (*mat)++;

    printf("%d\n",(*mat)++);

  return(0);
}

/*
    p = mat + 1 significa "incremente um valor no endereço atual". Esse incremento
    retorna o próximo elemento disponível na lista.

    mat++ e ++mat é um lvalue - Elemento de computação temporária que pode ser inspecionado,
    mas não necessariamente modificado.

    Referência: https://eli.thegreenplace.net/2011/12/15/understanding-lvalues-and-rvalues-in-c-and-c/
                https://www.quora.com/What-is-an-Lvalue-in-C

    x = (*mat)++ é uma expressão válida que retorna o primeiro elemento do array.
*/



