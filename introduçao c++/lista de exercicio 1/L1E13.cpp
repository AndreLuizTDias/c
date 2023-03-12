// L1E4.cpp
// Faça um programa que leia a idade e o peso de X pessoas, calcule e mostre:
//      1.	A quantidade de pessoas com mais de 90 kilos
//      2.	A média das idades das X pessoas

#include <iostream> 
using namespace std;
const int vezes=2;		// X = vezes
int main()
{
	int i, idade=0, totpesomaior90=0;
	float medidade=0, peso=0; 
	i=0;	
	while (i < vezes)
			{
				cout << "Digite o peso   da " << i+1 << "a pessoa: "; cin >> peso; cout << endl;
				cout << "Digite a idade  da " << i+1 << "a pessoa: "; cin >> idade; cout << endl;
				medidade=medidade+idade;
				if (peso > 90.0) {
					totpesomaior90++;
				}
				i++;
			}	
	cout << "A quantidade de pessoas com peso superior a 90 kilos e " << totpesomaior90 << endl << endl;	
	cout << "A media das idades e " << medidade / vezes << endl << endl;	
	return 0;
} // Fim de main()

