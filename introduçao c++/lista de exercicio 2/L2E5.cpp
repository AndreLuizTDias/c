// L2E5
// Fa�a um algoritmo que leia 10 n�meros inteiros em um vetor e calcule e imprima a m�dia dos mesmos

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

	cout << "\nA media dos valores do vetor e " << totnum/idx << endl;

	return 0;
} 

