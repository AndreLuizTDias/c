// L2E8
//	Faca um programa que leia 2 conjuntos com 10(X) números inteiros em um vetor e gere um terceiro conjunto 
//  com a media dos elementos de A e B. Apresente o C.

#include <iostream> 
using namespace std;
const int X=2;
int main() {
	
	int i;
	float a[X],b[X],c[X];
	
	for (i=0; i<X; i++) {
		a[i] = 0;				
		b[i] = 0;
		c[i] = 0;
	}
	
	for(i=0; i<X; i++) {
		cout << "\nDigite a " << i+1 << "a ocorrência do vetor A: "; cin >> a[i];
		cout << "\nDigite a " << i+1 << "a ocorrência do vetor B: "; cin >> b[i];
		c[i]=(a[i]+b[i])/2;
	}
	
	cout << "vetor c:"<< endl;
	for(i=0; i<X; i++) {
		cout << c[i] << " - ";
	}

	return 0;
}
