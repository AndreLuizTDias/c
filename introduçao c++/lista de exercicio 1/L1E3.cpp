// L1E3
// Faça um programa que leia 2 número e mostre quantos números tem no intervalo entre eles. 

#include <iostream> 
#include <locale.h> 	//necessário para usar setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, qt_num = 0; 
	
	cout << "Digite 1o numero: "; cin >> num1;
	cout << "Digite 2o numero: "; cin >> num2;
	
	if (num1==num2 || (num1-num2==1) || (num2-num1==1))
		cout << "números iguais ou NÃO tem valor(es) no intervalo"<< endl;
	else{
		if (num1<num2)
		    qt_num = num2-num1-1;
		else 
		    qt_num = num1-num2-1;
		cout << "Existe(m) " << qt_num << " Número(s) no intervalo"<< endl;
	}	

// exebir os numeros dentro do intervalo
	while (num1 < num2-1)
			{
				num1++;
				cout << num1 << ", ";
			}	
	while (num2 < num1-1)
			{
				num2++;
				cout << num2 << ", ";
			}	
		
	system ("pause");
	
	return 0;
}

