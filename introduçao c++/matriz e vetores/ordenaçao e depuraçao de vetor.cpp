#include <iostream>
using namespace std;
const int nlin=4;

int main (){

	int v1[nlin]={1,2,3,4};
	
	//for(int i=0;i<nlin;i++){
	//	cout << "valor "<< i+1 << ": " << v1[i] << endl; 		
	//}

	int aux;
	for(int f=0; f<nlin-1; f++){
		cout << endl << "f - " << f;
		for (int s=f+1; s<nlin; s++){
			cout << endl << "s - " << s;
			cout << endl << "Antes do IF e Antes da troca";
			cout << endl << "v1[f] " << v1[f];
			cout << endl << "v1[s] " << v1[s];
			cout << endl << "aux " << aux;
			if (v1[f]  < v1[s]) {		// > para Crescente	
				aux    = v1[f];		// < para Decrescente
				v1[f]  = v1[s];		
				v1[s]  = aux;
				cout << endl << "Dentro do IF e depois da troca";
				cout << endl << "v1[f] " << v1[f];
				cout << endl << "v1[s] " << v1[s];
				cout << endl << "aux " << aux;	
			}
			else{
				cout << endl << "NÃO TROCOU";
			}	
		}															
	}
	
	
	//for(int i=0;i<nlin;i++){
	//	cout << "valor "<< i+1 << ": " << v1[i] << endl; 		
	//}
system ("pause");

return 0;	
}
