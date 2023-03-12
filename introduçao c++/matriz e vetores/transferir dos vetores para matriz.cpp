#include <iostream>
#include <locale>
using namespace std;
const int nlin=4, ncol=5;

int main (){
	setlocale(LC_ALL, "ptb");
	
	int v1[5]={0,1,2,3,4}, v2[5]={9,8,7,6,5}, v3[10]={0,0,0,0,0,0,0,0,0,0};
	
	int m1[nlin][ncol]={{0}};

 //mostra valores
	for(int l=0; l<5; l++) { 			// l = linhas
		cout << endl << l << " ª ocorrências de V1 - " << v1[l];
	}	
	
	for(int l=0; l<10; l++) { 			// l = linhas
		cout << endl << l << " ª ocorrências de V3 - " << v3[l];
	}	
	
	
	// atribui valor do v1 e v2 a v3
	for(int i=0; i<5; i++) {
		v3[i]    = v1[i];
		v3[i+5]  = v2[i];
	}
	
	// atribuindo valor dos vetores as linhas das matrizes
	for(int c=0; c<ncol; c++) { 			
		m1[0][c] = v1[c];				
		m1[1][c] = v2[c];
		m1[2][c] = v3[c];
		m1[3][c] = v3[c+5];			
	}
	
	cout << endl << "VETORES---------------------------------";
	
	for(int l=0; l<5; l++) { 			
		cout << endl << l << " ª ocorrências de V1 - " << v1[l];
	}	
	
	for(int l=0; l<5; l++) { 			
		cout << endl << l << " ª ocorrências de V2 - " << v2[l];
	}	
	
	for(int l=0; l<10; l++) { 			
		cout << endl << l << " ª ocorrências de V3 - " << v3[l];
	}	
	
	cout << endl << "MATRIZ---------------------------------"; 
	
	for(int l=0; l<nlin; l++) {
		for (int c=0; c<ncol; c++) {
			cout << endl << l << "ª linha, " << c << "ª coluna " << m1[l][c];
		}	
	}
	
	return 0;
	
}
