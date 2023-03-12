// L1E2
// Dados quatro números distintos, desenvolver um algoritmo que 
// determine e imprima a soma dos três menores.
#include <iostream> 
using namespace std;
int main()
{
	int num1, num2, num3, num4 = 0; 
	
	cout << "Digite 1o numero: "; cin >> num1;
	cout << "Digite 2o numero: "; cin >> num2;
	cout << "Digite 3o numero: "; cin >> num3;
	cout << "Digite 4o numero: "; cin >> num4;
	
	if ( (num1 > num2) and (num1 > num3) and (num1 > num4) )
		{		
		cout << "A soma dos 3 menores numeros e igaul a " << num2 + num3 + num4 << endl;
		}
	else
		{
		if ( (num2 > num1) and (num2 > num3) and (num2 > num4) )
			{		
			cout << "A soma dos 3 menores numeros e igaul a " << num1 + num3 + num4 << endl;
			}
		else
			{
			if ( (num3 > num1) and (num3 > num2) and (num3 > num4) )
				{		
				cout << "A soma dos 3 menores numeros e igaul a " << num1 + num2 + num4 << endl;
				}
			else
				{
				cout << "A soma dos 3 menores numeros e igaul a " << num1 + num2 + num3 << endl;
				}	
			}	
		}
	
	return 0;
}

