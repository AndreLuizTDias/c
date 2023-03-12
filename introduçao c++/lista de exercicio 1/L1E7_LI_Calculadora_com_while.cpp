// 	L1E7
/*  Construa um algoritmo que simule uma calculadora com as seguintes opera��es matem�ticas: Soma, subtra��o, divis�o, multiplica��o e potencia��o. 
    O usu�rio da calculadora dever� entrar/ler sempre dois valores reais/float, em seguida, dever� escolher a opera��o a ser efetuada e o programa dever� mostrar: 
	 	- Os n�meros digitados, 
		- A opera��o escolhida e o 
		- Resultado da opera��o.
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
		cout << "(0)=Sair \n(1)-Adi�ao \n(2)-Subtracao \n(3)-Divisao \n(4)-Multiplicacao \n(5)-Potenciacao" << endl;
		cin >> op;
			
		switch (op)  
		{
	        case 0 	: break;
			case 1 : cout << "\n\nO calculo de " << v1 << " + " << v2 << " e : " << v1+v2; break;
			case 2 : cout << "\n\nO calculo e : " << v1-v2; break;
			case 3 : cout << "\n\nO calculo e : " << v1/v2; break;
			case 4 : cout << "\n\nO calculo e : " << v1*v2; break;
			case 5 : cout << "\n\nO calculo e : " << pow(v1,v2); break;
			default : cout << "Voc� digitou uma operacao invalida.";
		}			
	}
	cout << endl << endl;
	system("pause");
}
