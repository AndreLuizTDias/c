// L1E4
// Faça um programa que leia a idade, altura e peso de 5 pessoas, calcule e mostre:
//      1.	A quantidade de pessoas com idade superior a 50 anos
//      2.	A média das alturas das pessoas com idade entre 10 e 20 anos
//      3.	A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas

#include <iostream> 
using namespace std;
const int vezes= 5; // numero de pessoas
int main()
{
	int i, idade= 0, totidade= 0, totaltura= 0;
	float totpeso= 0, totpessoas= 0;
	float medaltura= 0, altura= 0, peso= 0;
	i=0;	
	while (i < vezes)
	{
		cout << "\nInsira os dados da " << i+1 << " pessoa\n";
		cout << "Digite o peso   da " << i+1 << "a pessoa: "; cin >> peso;
		cout << "Digite a idade  da " << i+1 << "a pessoa: "; cin >> idade;
	    cout << "Digite a altura da " << i+1 << "a pessoa: "; cin >> altura;
	    totpessoas++;
		if (idade>50) 
		{
	        totidade++;
		}
		if ((idade>=10) && (idade<=20)) 
		{
			medaltura=medaltura+altura;
			totaltura++;
		}
		if (peso<40) 
		{
			totpeso++;
		}
		i++;
	}
	
	cout << "A quantidade de pessoas com idade superior a 50 anos e " << totidade << endl << endl;	
	cout << "A media das alturas das pessoas com idade entre 10 e 20 anos e " << medaltura / totaltura << endl << endl;	
	cout << "A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas " << totpeso / totpessoas * 100 << "%"<< endl;	
	return 0;
}

