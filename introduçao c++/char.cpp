
#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	char res;
	string escolha;
	
	cout << "Digite M para masculino e F para Feminino";
	cin >> res;
	
	switch (res)
	{
		case 'm': escolha="masculino"; break;
		case 'M': escolha="masculino"; break;
		case 'f': escolha="Feminino"; break;
		case 'F': escolha="Feminino"; break;
		default: cout << "escolha invalida";	
		
	}
	
	cout << escolha;
	
	
	return 0;
}
