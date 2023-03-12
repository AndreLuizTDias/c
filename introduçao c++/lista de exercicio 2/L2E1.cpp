// L2E1
// Faça um algoritmo que leia 3 vetores. O 1º com 30 nomes de alunos, 2º com 30 notas de AV1 e 
// o 3º também com 30 notas de AV2. Ao final mostre cada aluno, suas notas e sua média simples.
#include <iostream> 
using namespace std;
const int tam=2;
int main()
{
	// Declara os vetores. 
	string nomes[tam];
	float av1[tam], av2[tam];
	
	// Inicializa os vetores
	for(int i=0; i<tam; i++) {
		nomes[i] = "";
		av1[i] = 0, av2[i] = 0;
	}
	
	
	// leitura dos vetores
	for(int i = 0; i < tam; i++) {
		cout << "\nDigite o " << i+1  << " nome: "; cin >> nomes[i];
		cout << "Digite a " << i+1 << " Nota de AV1: "; cin >> av1[i];
		cout << "Digite a " << i+1 << " Nota de AV2: "; cin >> av2[i];
	}
	
	cout <<"\nLista de alunos e suas notas"<< endl;
	// Mostrando os valores e calculando as médias
	for(int i = 0; i < tam; i++) {
		cout << i+1 << "o nome: " << nomes[i] << endl;
		cout << i+1 << "a nota de AV1: " << av1[i] << endl;
		cout << i+1 << "a Nota de AV2: " << av2[i] << endl;
		cout << i+1 << "a Media : " << (( av1[i] + av2[i]) / 2) << endl << endl;
	}

return 0;
system("pause");
}
