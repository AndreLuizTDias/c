// L2_E15.cpp
// 15.	15.	Ordene os alunos do exercício 14.
#include <iostream>
#include <locale.h> 	//necessário para usar setlocale 
using namespace std;
const int nlin=5, ncol=3;	// nlin = número de linhas e ncol =  número de colunas
int main() {
	setlocale(LC_ALL, "Portuguese");
	string nomes [nlin] = {"DDDDD", "EEEEE", "AAAAA", "CCCCC", "BBBBB"};
	float notas[nlin] [ncol] = {{6.5, 3.5, 0}, {6.5, 1.5, 0}, {6.5, 2.5, 0}, {5.5, 1.5, 0}, {6.5, 8.5, 0}};

// 	leitura das matrizes 
// 	Convenção:  As colunas 0 e 1 serão notas de AV1 e AV2 respectivamente e a coluna 2 a média
//				As linhas se referem aos alunos			
/*
for(int l=0; l<nlin; l++) { 			// percorre as posições das linhas
//		cout << endl << "Qual o nome do " << l+1 << "º aluno? "; cin >> nomes[l];
	for (int c=0; c<ncol-1; c++) {    	// percorre as posições das colunas 0 e 1
		cout << "Lendo a linha " << l << " coluna " << c << " : ";
		cin >> notas[l][c];
	}
}
*/
//
//	Atribuindo valores
//
/*	nomes[0] = "DDDDD"; AAAAA
	nomes[1] = "EEEEE";
	nomes[2] = "AAAAA"; DDDDD
	nomes[3] = "CCCCC";
	nomes[4] = "BBBBB";
*/
/*	
	notas[0][0] = 6.5;
	notas[0][1] = 3.5;
	notas[0][2] = 0;
	notas[1][0] = 6.5;
	notas[1][1] = 1.5;
	notas[1][2] = 0;
	notas[2][0] = 6.5;
	notas[2][1] = 2.5;
	notas[2][2] = 0;
	notas[3][0] = 5.5;
	notas[3][1] = 1.5;
	notas[3][2] = 0;
	notas[4][0] = 6.5;
	notas[4][1] = 8.5;
	notas[4][2] = 0;
*/	

// calculando as médias
//
for(int l=0; l<nlin; l++) { 			// percorre as posições das linhas
	notas[l][2] = (notas[l][0]+notas[l][1])/2;
}
//
//	Ordenando
//
string aux;
float auxnotas;
	
for(int l=0; l<nlin-1; l++) { 			// l = posições fixas
	for (int c=l+1; c<nlin; c++) {    	// c = posições sucessoras
		if (nomes[l] > nomes[c]){
			aux		 = nomes[l];
			nomes[l] = nomes[c];
			nomes[c] = aux;
			for (int col=0; col<ncol; col++) {    	// percorre as posições das colunas da matriz
				auxnotas 	  = notas[l][col];
				notas[l][col] = notas[c][col];
				notas[c][col] = auxnotas;	
			}
		}
		
	}
}

// Mostrando valores
for(int l=0; l<nlin; l++){ 	
	cout << "Aluno " << l+1 << " " << nomes[l] << endl;						
	for (int c=0; c<ncol; c++){ 
		if (c<2)
			cout << "AV" << c+1 << " = " << notas[l][c] << endl;
		else
			cout << "média" << " = " << notas[l][c] << endl;
	}
}

return 0;

} 
