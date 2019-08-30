#include <iostream>

using namespace std;

int main(){
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;

	cout << "Saída: " << (p == &i) << endl;
	cout << "Saída: " << *p - *q << endl;
	cout << "Saída: " << **&p << endl;
	cout << "Saída: " << 3 - *p/(*q) + 7 << endl;
	
	return 0;
	/*
	Expressão 1: p == &i
	Resultado 1: true

	Expressão 2: *p - *q
	Resultado 2: -2

	Expressão 3: **&p
	Resultado 3: 3

	Expressão 4: 3-*p/(*q) + 7 
	Resultado 3: 10
	*/
}
