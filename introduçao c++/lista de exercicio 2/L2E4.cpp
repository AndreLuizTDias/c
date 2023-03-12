// L2E4
// Faça um algoritmo que leia 10 números inteiros em um vetor e calcule e imprima a soma dos mesmos.

#include <iostream> 
using namespace std;
const int idx=5;
int main() {
	
	int i, totnum=0;
	int num[idx];

	// leitura do vetor e acumulando
	for(i=0; i<idx; i++){
		cout << "\nDigite o " << i+1 << " numero: "; 
		cin >> num[i];
		
		totnum=totnum+num[i];
		cout <<"Soma: " <<totnum << endl;
	}

	cout << "\nA soma dos valores do vetor e " << totnum << endl;

	return 0;
}

