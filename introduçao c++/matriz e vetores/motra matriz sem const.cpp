#include <iostream>
using namespace std;


int main (){
	
	
	int l=0,c=0;
	int M[2][2]={ {1,2}, {4,5} };

	
	for(l=0; l<2; l++) { 			// l = linhas
		for (c=0; c<2; c++) {    	// c = colunas
			cout << endl << l << " � linha, " << c << " � coluna - " << M[l][c];
			        // se eu quiser mostrar somente o resultado da matriz so apagar << l << " � linha, " << c << " � coluna - " 
		}
	}
	

	
	
	return 0;
}





