// L2_E16.cpp
// 16.	Construa um algoritmo que:
//      1.	Declare 2 vetores chamados V1 e V2, cada um com 10 ocorr�ncias de inteiros
//		2.	Declare 1 matriz chamada M com 10 linhas e 3 colunas de inteiros
//		3.	Leia os 2 vetores
//		4.	Atribua para a 1� coluna de M o V1
//		5.	Atribua para a 2� coluna de M o V2
// 		6.	Calcule a diferen�a do maior pelo menor valor e atribua para a 3� coluna de M
// 		7.	Ordene V1, V2 e 5� linha de M
//		8.	Mostre V1, V2 e M

#include <iostream>
#include <locale.h> 	//necess�rio para usar setlocale 
using namespace std;
const int nlin=5, ncol=3;	// nlin = n�mero de linhas e ncol =  n�mero de colunas

int main() {
	setlocale(LC_ALL, "Portuguese");
//	1.	Declare 2 vetores chamados V1 e V2, cada um com 10 ocorr�ncias de inteiros
	int V1[nlin]={2,1,0,12,18}, V2[nlin]={15,3,5,84,10};
//	2.	Declare 1 matriz chamada M com 10 linhas e 3 colunas de inteiros
	int M[nlin][ncol]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};	
//	3.	Leia os 2 vetores	
/*	for(int l=0; l<nlin; l++) { 			// percorre as posi��es das linhas
		cout << endl << "Informe o valor da " << l+1 << "� ocorr�ncia de V1 - "; cin >> V1[l];
		cout << endl << "Informe o valor da " << l+1 << "� ocorr�ncia de V2 - "; cin >> V2[l];
	}
*/
	for(int l=0; l<nlin; l++) { 			// percorre as posi��es das linhas
		M[l][0] = V1[l];					//		4.	Atribua para a 1� coluna de M o V1
		M[l][1] = V2[l];					//		5.	Atribua para a 2� coluna de M o V2
		if (M[l][0] > M[l][1])				// 		6.	Calcule a diferen�a do maior pelo menor valor e atribua para a 3� coluna de M
		    M[l][2] = M[l][0] - M[l][1];
		else
		    M[l][2] = M[l][1] - M[l][0];
	}
	
// 		7.	Ordene V1, V2 
	int auxv1, auxv2, auxm;

	for(int l=0; l<nlin-1; l++) { 			// l = posi��es fixas
		for (int c=l+1; c<nlin; c++) {    	// c = posi��es sucessoras
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
		cout << endl << l+1 << " � ocorr�ncias de V1 - " << V1[l];
		cout << endl << l+1 << " � ocorr�ncias de V2 - " << V2[l];
	}	
// Mostrando os valores da 5� linha(ocorr�ncia 4) da matriz M, ANTES da ordena��o
	cout << endl << "Mostrando os valores da 5� linha(ocorr�ncia 4) da matriz M, ANTES da ordena��o";
	for(int l=0; l<nlin; l++) { 			// l = linhas
		for (int c=0; c<ncol; c++) {    	// c = colunas
			cout << endl << l+1 << " � linha, " << c+1 << " � coluna - " << M[l][c];
		}
	}

//		Ordenando 5� linha de M
	for(int l=0; l<ncol-1; l++) { 				// l = posi��es fixas
		for (int col=l+1; col<ncol; col++) {    	// col = posi��es sucessoras
			if (M[4][l] > M[4][col]) {
				auxm 	  = M[4][l];
				M[4][l]   = M[4][col];
				M[4][col] = auxm;	
			}
		}
	}
	cout << endl << "=======================================================";
	cout << endl << "Mostrando os valores da 5� linha(ocorr�ncia 4) da matriz M, DEPOIS da ordena��o";
// Mostrando os valores da 5� linha(ocorr�ncia 4) da matriz M, DEPOIS da ordena��o
	for(int l=0; l<nlin; l++) { 			// l = linhas
		for (int c=0; c<ncol; c++) {    	// c = colunas
			cout << endl << l+1 << " � linha, " << c+1 << " � coluna - " << M[l][c];
		}
	}

	cout << endl << "=======================================================";

//		8.	Mostre V1, V2 e M
	for(int l=0; l<nlin; l++) { 			// l = linhas
		cout << endl << l+1 << " � ocorr�ncias de V1 - " << V1[l];
		cout << endl << l+1 << " � ocorr�ncias de V2 - " << V2[l];
		for (int c=0; c<ncol; c++) {    	// c = colunas
			cout << endl << l+1 << " � linha, " << c+1 << " � coluna - " << M[l][c];
		}
	}

return 0;

} // Fim de main()


