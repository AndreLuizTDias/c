// L2E10
// 	Faça um programa que leia um conjunto A com 10(X) números inteiros em um vetor e que gere um conjunto B 
//	com os elemento de A de acordo com a seguinte regra. 
//	Se o elemento de A for par, armazene em B multiplicando por 5. Se o elemento de A for impar, armazene 
//	em B somando 5.

#include <iostream> 
using namespace std;
const int X=5;
int main() {
	
	int i;
	int a[X],b[X];
	
	for(i=0; i<X; i++) {
		cout << "\n\nDigite a " << i+1 << "a ocorrência do vetor A: "; cin >> a[i];
		if (a[i]%2==0){		// PAR
			b[i]=a[i]*5;
		}
		else {				//ÍMPAR
			b[i]=a[i]+5;
		}
	}
	
	for(i=0; i<X; i++) {
		cout << b[i] << " - ";
	}

	return 0;
}
