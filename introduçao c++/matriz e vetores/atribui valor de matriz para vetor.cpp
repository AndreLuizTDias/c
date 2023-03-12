#include <iostream>
using namespace std;

int main (){
	
	int v1[5]={0};
	int m1[5][5]={{1,2,3,4,5}};
	
	cout<< endl << "-----------------" << endl;
	cout<< endl << "valores da matriz" << endl;
	cout<< endl << "-----------------" << endl;
	
	// mostrar matriz
	for (int l=0; l<5;l++){
		for (int c=0; c<5; c++){
			cout << endl << l+1 << "linhaº" << c+1 << "colunaº" << m1[l][c]; 
		}		
	}
	// atribi o valor de uma linha da matriz num vetor
	for(int c=0; c<5; c++) { 			
		v1[c] = m1[0][c];						
	}
	
	cout<< endl << "----------------" << endl;
	cout<< endl << "valores do vetor" << endl;
	cout<< endl << "----------------" << endl;
	
	// mostra vetor
	for (int l=0; l<5;l++){
			cout << endl << l+1 << "linhaº" << v1[l]; 		
	}
	
	return 0;
}
