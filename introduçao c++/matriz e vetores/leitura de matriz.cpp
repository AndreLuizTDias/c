#include <iostream>
#include <locale>
using namespace std;

int main (){

	setlocale(LC_ALL, "ptb");
	
	int m1[2][3]={{0}};
	

	// leitura de matriz
	for (int l=0; l<2;l++){
		for (int c=0; c<3;c++){ // se eu quiser colocar valor em uma coluna so, so colocar c<3-1 ou -2 
			cout << endl << "informe o valor da " << l+1 << "ªlinha " << c+1 << "ªcoluna " << "= ";
			cin >> m1[l][c];
		}
	}
	// mostra matriz
	for (int l=0; l<2;l++){
		for (int c=0; c<3;c++){
			cout << endl << l+1 << "ºlinha " << c+1 << "ºcoluna: " << m1[l][c];
		}
	}
	
	
	return 0;
}
