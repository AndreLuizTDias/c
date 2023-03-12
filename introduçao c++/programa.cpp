#include <iostream>
#include <locale>
using namespace std;

int main (){
	setlocale(LC_ALL, "ptb");
	
	int num1, num2, media;
	
	cout << "--------------------------------------------------------------------" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	
	cout << "este programa calcula dois numeros e diz a soma, subtração, divisao " << endl;
	cout << "e multiplicaçao informa a media e se o numero e positivo ou negativo" << endl;

	cout << "--------------------------------------------------------------------" << endl;
	cout << "--------------------------------------------------------------------" << endl;
		
	cout << "informe um numero: "; 
	cin >> num1;

	cout << "informe um numero: "; 
	cin >> num2;

	cout << "-------------------------------------" << endl;
	 
	cout << "os numeros informados foram: " << num1 << endl;
	cout << "os numeros informados foram: " << num2 << endl;
	
	cout << "-------------------------------------" << endl;
	
	cout << "a soma dos numeros informados      : " << num1+num2 << endl;
	cout << "a subtraçao dos numeros informados : " << num1-num2 << endl;
	cout << "a divisao dos numeros informados   : " << num1/num2 << endl;
	cout << "a multiplicaçao numeros informados : " << num1*num2 << endl;	
	
	cout << "-------------------------------------" << endl;

	media=(num1+num2)/2;
	cout << "a media dos numeros informados: " << media << endl << endl;
	
	cout << "-------------------------------------" << endl;
	
	if (media>0)
		{
		cout << "este numero e positivo" << endl;
		}
	else if (media<=0)
		{
		cout << "este numero e negativo" << endl;	
		}
	else
		{
		cout << "numero nulo" << endl;
		}
	
	cout << "-------------------------------------" << endl;


	system ("pause");
	return 0;
}
