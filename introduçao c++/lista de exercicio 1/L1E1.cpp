// L1E1
// Desenvolver um algoritmo que leia um número inteiro e 
// verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
#include <iostream> 
using namespace std;
int main()
{
	int num = 0; 
	cout << "Digite um numero: "; 
	cin >> num;
	if ((num % 3)==0 and (num % 5)==0 )
		{		
		cout << num << " E divisivel por 3 e 5" << endl;
		}
	else
		{
		cout << num << " NAO E divisivel por 3 e 5" << endl;
		}
	
	return 0;
}

