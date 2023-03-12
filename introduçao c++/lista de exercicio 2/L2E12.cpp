// L2E12
// 	Faça um programa que leia dois conjuntos A e B com 5(X) números inteiros em um vetor e gere 
//	um conjunto de 10 elementos, onde os 5 primeiros elementos são de A e o resto de B.  
//	Apresente o conjunto C.

#include <iostream> 
using namespace std;
const int X=5;
int main() {

	int i, aux;
	int a[X],b[X], c[10];
	
	for (i=0; i<X; i++) {
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
	}
	
	for(i=0; i<X; i++) {
		cout << "\n\nDigite a " << i+1 << "a ocorrência do vetor A: "; cin >> a[i];
		cout << "\n\nDigite a " << i+1 << "a ocorrência do vetor B: "; cin >> b[i];
		c[i]    = a[i];
		c[i+5]  = b[i];
	}

	for(i=0; i<10; i++) {
		cout << c[i] << " - ";
	}

	return 0;
}
