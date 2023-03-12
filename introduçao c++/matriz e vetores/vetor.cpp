#include <iostream>
using namespace std;

int main ()
{
	
	string nomes [5];
	int indice;
	for (indice=0;indice<=4;indice++)
	{
		cout << "informe o nome do " << indice+1 << "o. aluno: ";
		cin >> nomes[indice];
	}
	for (indice=0;indice<=4;indice++)
	{
		cout << indice+1 << "o. aluno: " << nomes[indice] << endl;
	}
	
	
	return 0;
	
}
