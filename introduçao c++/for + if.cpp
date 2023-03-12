#include <iostream>
#include <locale>
using namespace std;

int main ()
{
setlocale(LC_ALL, "ptb");
	
	
	int num, contador, idade;
	
	for (contador=1;contador<=5;contador++)
	{
		cout << "qual a idade da " << contador << "º pessoa?" << endl;
		cin >> idade;	
		if (idade>=18)
		{
			cout << "esta pessoa ja pode tirar a carteira de motorista" << endl;
		}
		else
		{
			cout << "esta pessoa ainda nao pode tirar a carteira de motorista" << endl;
		}
		
	}
	
	return 0;
	
}
