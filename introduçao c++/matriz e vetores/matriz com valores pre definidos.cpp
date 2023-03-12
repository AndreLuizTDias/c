#include <iostream>
#include <locale>
using namespace std;
const int nlin=2, ncol=3;

int main (){
	
	setlocale(LC_ALL, "ptb");
	
	int matriz[nlin][ncol]={{5,2,0},{4,6,0}};
	int l=0,c=0,aux=0;
	
	// mostra os valores
	for(l=0; l<nlin; l++) {
		for (c=0; c<ncol; c++) {
			cout << endl << l+1 << "ª linha, " << c+1 << "ª coluna " << matriz[l][c];
		}	
	}
	
	cout<< endl << "------------------------------------" << endl;
	
	// calcular a media
	for(int l=0; l<nlin; l++) { 			// percorre as posições das linhas
	matriz[l][2] = (matriz[l][0]+matriz[l][1])/2;
	}
	
	// mostra valores novos com  a media incluida
	for(l=0; l<nlin; l++) {
		for (c=0; c<ncol; c++) {
			if (c<2)
			cout << endl << l+1 << "ª linha, " << c+1 << "ª coluna " << matriz[l][c];
			else
			cout << endl << "media = " << matriz[l][c];
		}	
	}
	
	return 0;
	
}
