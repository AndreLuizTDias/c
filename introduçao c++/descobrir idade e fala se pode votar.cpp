#include <iostream>
using namespace std;

int main ()
{
	int anoatual, anoNasc, idade;

	cout << "qual o ano atual: ";
	cin >> anoatual;

	cout << "seu ano de nascimento: ";
	cin >> anoNasc;
	
	idade= anoatual-anoNasc;
	
	cout << "voce tem ou fara " << idade << " anos" << endl;
	
	if (idade > 16)
	{
		cout << "voce ja pode votar!" << endl;
	}
	else
	{
		cout << "voce ainda nao pode votar!";
	}

	return 0;	
	
}
