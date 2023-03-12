// L2E2.cpp
// Leia um vetor com 10 valores inteiros e coloque-os em ordem crescente e mostre.
#include <iostream> 
using namespace std;
const int tam=3; 

int main(){
	
	int aux, vet[tam];
	int fix, suc, i, j; 
	
	// leitura dos vetores
	for(i=0; i<tam; i++) {
		cout << "\nDigite o " << i+1 << "o valor do vetor: "; 
		cin >> vet[i];
	}	
		
	// Ordenando
	for(fix=0; fix<tam-1; fix++) {
		for (suc=fix+1; suc<tam; suc++){
			if (vet[fix] < vet[suc]) {		// > para Crescente	| < para Decrescente
				aux      = vet[fix];		
				vet[fix] = vet[suc];		
				vet[suc] = aux;
			}
		}																	
	}				
	
	// Mostrando os vetores
	cout << "\nOs valor ordenados sao " ;
	for(i = 0; i < tam; i++) {
		cout << vet[i] << " - ";
	}

return 0;

}
