#include <iostream>

using namespace std;

int main(){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    return 0;
}

/*
    São impressos os valores: 4094 7 5 15 9
*/
