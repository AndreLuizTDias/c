// L2E13
// 	Faça um programa que leia dois conjuntos A e B com 5(X) números inteiros em um vetor e gere um conjunto 
//	de 15(X) elementos, onde os 5(X) primeiros elementos são de A, os 5(X) seguintes de B e o restante de C, onde C 
//	teria a soma de A + B. Apresente o conjunto C.
#include <iostream> 
using namespace std;
const int X=5;
int main() {
	
	int i, aux;
	int a[X],b[X], c[15];  

	for (i=0; i<X; i++) {
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
		c[i+5] = 0;
		c[i+10] = 0;
	}

	for(i=0; i<X; i++) {
		cout << "\nDigite a " << i+1 << "a ocorrência do vetor A: "; cin >> a[i];
		cout << "Digite a " << i+1 << "a ocorrência do vetor B: "; cin >> b[i];
		c[i]     = a[i];
		c[i+5]   = b[i];
		c[i+10]  = a[i]+b[i];
	}

	for(i=0; i<15; i++) {
		cout << c[i] << " - ";
	}

	return 0;
} 
