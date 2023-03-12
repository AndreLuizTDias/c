#include <iostream>
using namespace std;

int main (){
	
	int v1[10]={0,1,2,3,4,5,6,7,8,9}, v2[10]={9,8,1,6,5,4,3,2,1,0}, v3[10]{0,1,5,9,1,1,1,9,8,1};
	int m1[4][10]={{0}};
	
	
	// atribui os vetores a matriz e a ultima linha do vetor recebe o menor numero das ultimas ocorrencias
	for(int c=0; c<10; c++) { 			
		m1[0][c] = v1[c];				
		m1[1][c] = v2[c];
		m1[2][c] = v3[c];	
		
		if (m1[0][c] < m1[1][c] and m1[2][c] )
			m1[3][c] = m1[0][c];
		if (m1[1][c] < m1[0][c] and m1[2][c] )
			m1[3][c] = m1[1][c];
		if (m1[2][c] < m1[0][c] and m1[1][c] )
			m1[3][c] = m1[2][c];	
	}

	for(int l=0; l<4; l++) { 			// l = linhas
		for (int c=0; c<10; c++) {    	// c = colunas
			cout << endl << l+1 << " ª linha, " << c+1 << " ª coluna - " << m1[l][c];
		}
	}
	
	
 return 0;	
}
