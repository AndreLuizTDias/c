// L2_Vetor.cpp
// Explicação de Vetor
#include <iostream> 
using namespace std;
const int tam=2;	// representa o X dos enunciados das listas de exercícios
int main()
{
// Declara os vetores e inicializando. 
string nomes[tam]={"baliu1","baliu3"};
int av1[tam]={6,5}, av2[tam]={2};

// Mostrando os valores
for(int i=0; i<tam; i++) { 	// percorre as posições do vetor
	cout << "ocorrência " << i << " " << nomes[i] << endl; 		// colocar posição
	cout << "ocorrência " << i << " " << av1[i]   << endl;
	cout << "ocorrência " << i << " " << av2[i]   << endl;
}
/*
// Inicializa os vetores
for(int i=0; i<tam; i++) {	// percorre as posições do vetor
	nomes[i] = "";
	av1[i]=0, av2[i] = 0;
}
cout << "====================================" << endl;
// Mostrando os valores
for(int i=0; i<tam; i++) {	// percorre as posições do vetor
	cout << "ocorrência " << i << " " << nomes[i] << endl; 		// colocar posição
	cout << "ocorrência " << i << " " << av1[i]   << endl;
	cout << "ocorrência " << i << " " << av2[i]   << endl;
//	cout << nomes[i] << endl; 		// colocar posição
//	cout << av1[i] << endl;
//	cout << av2[i] << endl;
}

// leitura dos vetores

for(int i = 0; i < tam; i++) {
	cout << "\nDigite o " << i+1 << "o nome: ";        cin >> nomes[i];
	cout << "\nDigite a " << i+1 << "o Nota de AV1: "; cin >> av1[i];
	cout << "\nDigite a " << i+1 << "o Nota de AV2: "; cin >> av2[i];
}

// Mostrando os valores e calculando as médias
for(int i = 0; i < tam; i++) {
	cout << i+1 << "o nome: " << nomes[i] << endl;
	cout << i+1 << "a nota de AV1: " << av1[i] << endl;
	cout << i+1 << "a Nota de AV2: " << av2[i] << endl;
	cout << i+1 << "a Media : " << (( av1[i] + av2[i]) / 2) << endl << endl;
}
*/
return 0;

} // Fim de main()
