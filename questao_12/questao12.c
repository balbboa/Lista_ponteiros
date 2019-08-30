#include <stdio.h>

int main() {
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha);
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    pf = aloha;

    return(0);
}

/*
    As seguintes expressões são inválidas:
        aloha = value (Atribuindo array de float a um número float)
        coisas[5] = aloha (Atribuindo array de float a um número float);
        pf = value (Atribuição de ponteiro para float e um número float) ;

*/



