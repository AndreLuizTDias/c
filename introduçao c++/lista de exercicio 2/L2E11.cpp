// L2E11
// 	Faça um programa que leia dois conjuntos A e B com 10(X) números inteiros em um vetor e troque 
//	os valores de A com B.

#include <iostream> 
using namespace std;
const int X=2;
int main() {
	
	int i, aux;
	int a[X],b[X];
			
	for(i=0; i<X; i++) {
		cout << "\nDigite a " << i+1 << "a ocorrência do vetor A: "; cin >> a[i];
		cout << "Digite a " << i+1 << "a ocorrência do vetor B: "; cin >> b[i];
		aux		= a[i];
		a[i]	= b[i];
		b[i]	= aux;
	}
	
	cout << "VETOR A \n ";
	for(i=0; i<X; i++) {
		cout << a[i] << " - ";
	}
	cout << "\nVETOR B \n ";
	for(i=0; i<X; i++) {
		cout << b[i] << " - ";
	}

	return 0;
}
