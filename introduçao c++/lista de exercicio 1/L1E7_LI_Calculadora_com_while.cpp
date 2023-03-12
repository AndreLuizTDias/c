// 	L1E7
/*  Construa um algoritmo que simule uma calculadora com as seguintes operações matemáticas: Soma, subtração, divisão, multiplicação e potenciação. 
    O usuário da calculadora deverá entrar/ler sempre dois valores reais/float, em seguida, deverá escolher a operação a ser efetuada e o programa deverá mostrar: 
	 	- Os números digitados, 
		- A operação escolhida e o 
		- Resultado da operação.
*/
#include <iostream>
#include <math.h> 

using namespace std;

int main(){
    int i;
    float v1, v2=0; 
    int op=6;
 
    while 	(op != 0)
	{
		op=9;
		cout << endl <<"===============================================";
		cout << endl << "Informe um numero   : "; cin >> v1; cout << endl;
    	cout << "Informe outro numero: "; cin >> v2; cout << endl;
    		
    	cout << "Digite a operacao desejada" << endl;
		cout << "(0)=Sair \n(1)-Adiçao \n(2)-Subtracao \n(3)-Divisao \n(4)-Multiplicacao \n(5)-Potenciacao" << endl;
		cin >> op;
			
		switch (op)  
		{
	        case 0 	: break;
			case 1 : cout << "\n\nO calculo de " << v1 << " + " << v2 << " e : " << v1+v2; break;
			case 2 : cout << "\n\nO calculo e : " << v1-v2; break;
			case 3 : cout << "\n\nO calculo e : " << v1/v2; break;
			case 4 : cout << "\n\nO calculo e : " << v1*v2; break;
			case 5 : cout << "\n\nO calculo e : " << pow(v1,v2); break;
			default : cout << "Você digitou uma operacao invalida.";
		}			
	}
	cout << endl << endl;
	system("pause");
}
