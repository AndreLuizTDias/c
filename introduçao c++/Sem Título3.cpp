#include <iostream>
#include <locale>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "ptb");

	float num1, num2, resultado;
	int op;
	cout <<"Informe o 1o. número: ";
	cin >> num1;
	cout <<"Informe o 2o. número: ";
	cin >> num2;
	cout <<"------------------------"<< endl;
	cout <<"escolha a operaçao matematica"<< endl;
	cout <<"1- adiçao" << endl;
	cout <<"2- subtraçao" << endl;
	cout <<"3- divisao" << endl;
	cout <<"4- multiplicaçao" << endl;
	cout <<"opçao: " << endl;
	cin >> op;
	
	if (op==1)
	{
		resultado=num1+num2;
		cout << num1 <<" + " << num2 << "=" << resultado << endl;
	}
	else if (op==2)
	{
		resultado=num1-num2;
		cout << num1 <<" - " << num2 << "=" << resultado << endl;
	}
	else if (op==3)
	{
		resultado=num1/num2;
		cout << num1 <<" / " << num2 << "=" << resultado << endl;
	}
	else if (op==4)
	{
		resultado=num1*num2;
		cout << num1 <<" * " << num2 << "=" << resultado << endl;
	}
	else
	{
		cout << "operaçao invalida";
	}
	
}
