#include <iostream>
using namespace std;
int aux=0;

int main (){
	
	int m1[2][5]={{0,1,2,3,4},{5,6,7,8,9}};
 	
	 /*	
	for (int l=0;l<2;l++){
		for (int c=0; c<5;c++)
		cout << m1[l][c];
	}
	*/
	
	/* ordena todas as colunas
	for(int f=0; f<2-1; f++) { 					// f = posições fixas								
		for (int c=0; c<5;c++){
			for (int s=f+1; s<2; s++) {    			// s = posições sucessoras	
				if (m1[f][c] < m1[s][c]) {				// Ordenando a 1ª coluna de M1 que é a 0
					aux 	 = m1[f][c];				// > crescente	
					m1[f][c] = m1[s][c];				// < decrescente
					m1[s][c] = aux;
				}
			}
		}
	}	
	
		antes da ordenaçao decrescente de coluna 
		c	c	c	c	c
		0	1	2	3	4
l	0	0	1	2	3	4
l	1	5	6	7	8	9
		depois da ordenaçao	decrescente de coluna 		
		0	1	2	3	4
	1	5	6	7	8	9
	0	0	1	2	3	4
	*/
	
	// ordenando todas as linhas da matriz
	for(int f=0; f<5-1; f++) { 							// f = posições fixas	
		for (int l=0; l<2; l++){
			for (int s=f+1; s<5; s++) {    				// s = posições sucessoras	
				if (m1[l][f] < m1[l][s]) {				// Ordenando a 1ª coluna de M1 que é a 0
					aux 	 = m1[l][f];				// > crescente	
					m1[l][f] = m1[l][s];				// < decrescente
					m1[l][s] = aux;
				}
			}
		}
	}	
		/*
		antes da ordenaçao decrescente de linha
		c	c	c	c	c
		0	1	2	3	4
l	0	0	1	2	3	4
l	1	5	6	7	8	9
		depois da ordenaçao decrescente de linha			
		0	1	2	3	4
l	1	4	3	2	1	0
l	0	9	8	7	6	5
		*/
	
		for (int l=0;l<2;l++){
			for (int c=0; c<5;c++)
			cout << endl << m1[l][c];
		}
	
	
	return 0;
}
