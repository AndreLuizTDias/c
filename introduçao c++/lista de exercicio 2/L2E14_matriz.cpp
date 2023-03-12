/*
L2E14
	Faça um algoritmo que leia 1 vetor com X posições e 1 matriz com X linhas e 3 colunas onde:
		a.	As linhas correspondem aos alunos de uma turma.
		b.	No vetor estão os nomes
		c.	Na 1ª coluna as notas de AV1
		d.	Na 2ª coluna as notas de AV2
		e.	E na 3ª coluna as médias (calcular média simples).

*/

#include <iostream>
#include <locale.h>
using namespace std;
const int nlin=2, ncol=3;	
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	string nomes [nlin];
	float notas[nlin][ncol];
	
	for(int l=0; l<nlin; l++) { 			
			cout << endl << "Qual o nome do " << l+1 << "º aluno? "; cin >> nomes[l];
		for (int c=0; c<ncol-1; c++) {    
			cout << "Nota AV" << c+1 << ": ";
			cin >> notas[l][c];
		}
	}
	
	// calculando a media
	for(int l=0; l<nlin; l++) {
		notas[l][2] = (notas[l][0]+notas[l][1])/2;
	}
	
	// Mostrando valores
	for(int l=0; l<nlin; l++) { 			// percorre as posições das linhas
		cout<< endl << "Aluno " << l+1 << "\nnome: " << nomes[l] << endl;						
		for (int c=0; c<ncol; c++) {    	// percorre as posições das colunas
			if(c < 2){
				cout << "AV" << c+1 << " = " << notas[l][c] << endl;
			}else{
				cout << "Media" << " = " << notas[l][c] << endl;
			}
		}
	}

return 0;
}
