#include <iostream>
#include <locale>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "ptb");

	float num1, num2, resultado;
	int op;
	cout <<"Informe o 1o. n�mero: ";
	cin >> num1;
	cout <<"Informe o 2o. n�mero: ";
	cin >> num2;
	cout <<"------------------------"<< endl;
	cout <<"escolha a opera�ao matematica"<< endl;
	cout <<"1- adi�ao" << endl;
	cout <<"2- subtra�ao" << endl;
	cout <<"3- divisao" << endl;
	cout <<"4- multiplica�ao" << endl;
	cout <<"op�ao: " << endl;
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
		cout << "opera�ao invalida";
	}
	
}
