#include <iostream>
using namespace std;

int main()
{
	int nunmes;
	string mesExtenso;
	
	cout << "informe o numero do mes: ";
	cin >> nunmes;
	
	switch (nunmes)
	{
		case 1: mesExtenso="janeiro"; break;
		case 2: mesExtenso="fevereiro"; break;
		case 3: mesExtenso="marco"; break;
		case 4: mesExtenso="abril"; break;
		case 5: mesExtenso="maio"; break;
		case 6: mesExtenso="junho"; break;
		case 7: mesExtenso="julho"; break;
		case 8: mesExtenso="agosto"; break;
		case 9: mesExtenso="setembro"; break;
		case 10: mesExtenso="outubro"; break;
		case 11: mesExtenso="novembro"; break;
		case 12: mesExtenso="dezembro"; break;
		default: cout << "mes invalido";	
		
	}
	
	cout << mesExtenso;
	
	
	
}


	
