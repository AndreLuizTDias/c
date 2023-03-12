// L1E7.cpp
// faça um algoritmo para ler e imprimir o nome e a idade de várias pessoas, até encontrar alguém com 65 anos, 
// quando deverá ser impresso, além do nome e da idade, uma mensagem informando o fato.

#include <iostream> 
using namespace std;
const int vezes=2;
int main()
{
	int i, idade=0;
	string nome="";
	i=1;	
	while (idade !=  65)
			{
				cout << "Digite o nome   da " << i << "a pessoa: "; cin >> nome; cout << endl;
				cout << "Digite a idade  da " << i << "a pessoa: "; cin >> idade; cout << endl;
	            cout << "Nome : " << nome << " - Idade : " << idade << endl << endl;
	            cout << "=====================================================" << endl << endl;
	           	i++;
			}	
			
	cout << "Fim devido a Idade ser igual a 65 anos" << endl;
	
	return 0;
} // Fim de main()

