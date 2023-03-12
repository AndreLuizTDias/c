// L2_E16.cpp
// 16.	Construa um algoritmo que:
//      1.	Declare 2 vetores chamados V1 e V2, cada um com 10 ocorrências de inteiros
//		2.	Declare 1 matriz chamada M com 10 linhas e 3 colunas de inteiros
//		3.	Leia os 2 vetores
//		4.	Atribua para a 1ª coluna de M o V1
//		5.	Atribua para a 2ª coluna de M o V2
// 		6.	Calcule a diferença do maior pelo menor valor e atribua para a 3ª coluna de M
// 		7.	Ordene V1, V2 e 5ª linha de M
//		8.	Mostre V1, V2 e M

#include <iostream>
#include <locale.h> 	//necessário para usar setlocale 
using namespace std;
const int nlin=5, ncol=3;	// nlin = número de linhas e ncol =  número de colunas

int main() {
	setlocale(LC_ALL, "Portuguese");
//	1.	Declare 2 vetores chamados V1 e V2, cada um com 10 ocorrências de inteiros
	int V1[nlin]={2,1,0,12,18}, V2[nlin]={15,3,5,84,10};
//	2.	Declare 1 matriz chamada M com 10 linhas e 3 colunas de inteiros
	int M[nlin][ncol]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};	
//	3.	Leia os 2 vetores	
/*	for(int l=0; l<nlin; l++) { 			// percorre as posições das linhas
		cout << endl << "Informe o valor da " << l+1 << "ª ocorrência de V1 - "; cin >> V1[l];
		cout << endl << "Informe o valor da " << l+1 << "ª ocorrência de V2 - "; cin >> V2[l];
	}
*/
	for(int l=0; l<nlin; l++) { 			// percorre as posições das linhas
		M[l][0] = V1[l];					//		4.	Atribua para a 1ª coluna de M o V1
		M[l][1] = V2[l];					//		5.	Atribua para a 2ª coluna de M o V2
		if (M[l][0] > M[l][1])				// 		6.	Calcule a diferença do maior pelo menor valor e atribua para a 3ª coluna de M
		    M[l][2] = M[l][0] - M[l][1];
		else
		    M[l][2] = M[l][1] - M[l][0];
	}
	
// 		7.	Ordene V1, V2 
	int auxv1, auxv2, auxm;

	for(int l=0; l<nlin-1; l++) { 			// l = posições fixas
		for (int c=l+1; c<nlin; c++) {    	// c = posições sucessoras
			if (V1[l] > V1[c]){				// Ordenando V1
				auxv1 = V1[l];
				V1[l] = V1[c];
				V1[c] = auxv1;
			}
			if (V2[l] > V2[c]){				// Ordenando V2
				auxv2 = V2[l];
				V2[l] = V2[c];
				V2[c] = auxv2;
			}
		}
	}

// Mostrando vetores ordenados
	for(int l=0; l<nlin; l++) { 			// l = linhas
		cout << endl << l+1 << " ª ocorrências de V1 - " << V1[l];
		cout << endl << l+1 << " ª ocorrências de V2 - " << V2[l];
	}	
// Mostrando os valores da 5ª linha(ocorrência 4) da matriz M, ANTES da ordenação
	cout << endl << "Mostrando os valores da 5ª linha(ocorrência 4) da matriz M, ANTES da ordenação";
	for(int l=0; l<nlin; l++) { 			// l = linhas
		for (int c=0; c<ncol; c++) {    	// c = colunas
			cout << endl << l+1 << " ª linha, " << c+1 << " ª coluna - " << M[l][c];
		}
	}

//		Ordenando 5ª linha de M
	for(int l=0; l<ncol-1; l++) { 				// l = posições fixas
		for (int col=l+1; col<ncol; col++) {    	// col = posições sucessoras
			if (M[4][l] > M[4][col]) {
				auxm 	  = M[4][l];
				M[4][l]   = M[4][col];
				M[4][col] = auxm;	
			}
		}
	}
	cout << endl << "=======================================================";
	cout << endl << "Mostrando os valores da 5ª linha(ocorrência 4) da matriz M, DEPOIS da ordenação";
// Mostrando os valores da 5ª linha(ocorrência 4) da matriz M, DEPOIS da ordenação
	for(int l=0; l<nlin; l++) { 			// l = linhas
		for (int c=0; c<ncol; c++) {    	// c = colunas
			cout << endl << l+1 << " ª linha, " << c+1 << " ª coluna - " << M[l][c];
		}
	}

	cout << endl << "=======================================================";

//		8.	Mostre V1, V2 e M
	for(int l=0; l<nlin; l++) { 			// l = linhas
		cout << endl << l+1 << " ª ocorrências de V1 - " << V1[l];
		cout << endl << l+1 << " ª ocorrências de V2 - " << V2[l];
		for (int c=0; c<ncol; c++) {    	// c = colunas
			cout << endl << l+1 << " ª linha, " << c+1 << " ª coluna - " << M[l][c];
		}
	}

return 0;

} // Fim de main()


