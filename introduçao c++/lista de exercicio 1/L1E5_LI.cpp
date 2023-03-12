// L1E5
// Uma loja utilizou o código V para transações à vista e P para transações à prazo. 
// Faça um programa que leia o código e o valor de 5 transações, calcule e mostre:
//   1.	O valor total das compras à vista
//   2.	O valor total das compras à prazo
//   3.	O valor total das compras efetuadas

#include <iostream> 
using namespace std;
const int vezes= 2;
int main()
{
	int i=1;
	string codigo="X";
	float valor=0, totavista=0, totaprazo=0;
	cout << "Codigo da mercadoria: V = a vista e P = a prazo" << endl << endl;
	while (i <= vezes)
	{
		cout << "Digite o codigo da mercadoria da " << i << "a transacao: "; 
		while (codigo != "V" and codigo != "v" and codigo != "P" and codigo != "p") cin >> codigo;
		
		cout << endl << "Digite a valor da mercadoria  da " << i << "a transacao: "; cin >> valor; cout << endl;
		if (codigo == "V" or codigo == "v" )
		{
	        totavista=totavista+valor;
		}
		else 
		{
			totaprazo=totaprazo+valor;
		}
		i++; codigo="X";
	}	

	cout << "O valor total das compras à vista e " << totavista << endl;	
	cout << "O valor total das compras à prazo e " << totaprazo << endl;	
	cout << "O valor total das compras efetuadas e " << totavista + totaprazo << endl;	
	return 0;
}

