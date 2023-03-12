#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	
	int escolha;
	double num1, num2, res;

	cout << "informe um numero: "; cin >> num1; cout << "informe um numero: "; cin >> num2;
	
cout << "-----------------------------------------------------------------" << endl;
	cout << "           ESCOLHA UMA OPERAÇAO MATEMATICA"                 << endl;
	cout << "(1)= soma, (2)= subtraçao, (3)= multiplicaçao, (4)= divisao"<< endl; cin >> escolha;

cout << "-----------------------------------------------------------------" << endl;
	
	switch(escolha)
	{
	case 1:res=num1+num2;break;
	case 2:res=num1-num2;break;
	case 3:res=num1*num2;break;
	case 4:res=num1/num2;break;
	}

//cout << "-----------------------------------------------------------------" << endl;	
	cout << "a resposta e: "<< res << endl;
system ("pause");
return 0;	
	
}
