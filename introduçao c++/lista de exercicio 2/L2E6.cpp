// L2E6
//Fa�a um programa que leia X n�meros inteiros em um vetor e apresente:
//	1.	M�dia dos �mpares
//	2.	Maior n�mero par
//	3.	Diferen�a do maior menos o menor n�mero
#include <iostream> 
using namespace std;
const int idx=5;
int main() { 
	int i, medimp=0, qtdimp=0, maiorpar=0, maior=0, menor=0;
	int num[idx];

	// leitura do vetor e testes
	for(i=0; i<idx; i++){
		cout << "\nDigite o " << i+1 << " numero: "; 
		cin >> num[i];
		
		if (num[i]%2 != 0){ // e impar
			medimp=medimp+num[i];
			qtdimp=qtdimp+1;
		}
		else {	// � par
			if (maiorpar < num[i]) 
				maiorpar = num[i];
		}
		if (maior < num[i])		// guardo o maior
			maior = num[i];
			
		if (i==0) 				// guardo o 1 n�mero
			menor=num[i];	
			
		if (menor > num[i])		// guardo o menor
			menor = num[i];
	}

	cout << "\nA media dos numeros impares e " << medimp/qtdimp << endl;
	cout << "\nO maior numero par e " << maiorpar << endl;
	cout << "\nA diferenca do maior - menor numero e = " << maior-menor << endl;

	return 0;
}

