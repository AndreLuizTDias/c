#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL, "ptb");
	
	int lin, col, media;
	float notas [4][3];
	

	// leitura
	for (lin=0;lin<=3;lin++)
	{
		cout << "informe a nota do " << lin+1 << "º aluno" << endl;
		
		for (col=0;col<=2;col++)
		{
			cout << "informe a nota do "<< col+1 << " bimestre: ";
			cin >> notas[lin][col];		
		}		
	}
	
	// mostra
	for (lin=0;lin<=3;lin++)
	{
		cout << " notas do " << lin+1 << "º aluno   " << endl;
		
		for (col=0;col<=2;col++)
		{
			cout << "A nota " << col+1 << " e: " << notas [lin][col] << endl;
				
		}		
	}
	
	system ("pause");
	
	return 0;
}

