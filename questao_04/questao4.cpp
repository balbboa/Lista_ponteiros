int main(){
    int i = 5, j = 7;
    int *p, *q;

    //p = i;
    q = &j;
    p = &*&i;
    i = *(&j);
    i = *&j;
    i = *&*&j;
//    q = *p;
    i = (*p)++ + *q;
}

/*
    As expressões: p = i e q = *p são ilegais devido ao tipo de
    conversão feita. Um inteiro está sendo atribuido a um ponteiro
    para inteiro.

    Na expressão i = (*&)j o compilador não consegue identificar a construção
    do jeito que está escrita. *&j e *(&j) seriam expressões semelhantes aceitas
    pelo compilador.
*/




