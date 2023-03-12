// L2E9
// 	Faca um programa que leia um conjunto A com 10 números inteiros em um vetor e que armazene em um conjunto B 
// 	do mesmo tipo os elementos de A multiplicados por 3. apresente o conjunto B.

#include <iostream> 
using namespace std;
const int X=5;
int main() {

	int i;
	int a[X],b[X];

	for(i=0; i<X; i++) {
		cout << "\nDigite a " << i+1 << "a ocorrência do vetor A: "; cin >> a[i];
		b[i]=a[i]*3;
	}
	
	for(i=0; i<X; i++) {
		cout << b[i] << " - ";
	}

	return 0;
}
