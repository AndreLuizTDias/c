#include <iostream>
#include <locale>
using namespace std;
const int nlin=2, ncol=3;

int main (){
	setlocale(LC_ALL, "ptb");
	
	int m1[nlin][ncol]={{1,2,3},{4,5,6}};

	// mostra os valores
	/*for (int l=0; l<nlin; l++){ 
		for (int c=0; c<ncol; c++){
			cout << endl << " linha: " << l << " coluna: " << c << " numeros na matriz: " <<  m1[l][c];
		}		
	}
*/
	
	/* ordena�ao de coluna
	int aux;
	for(int f=0; f<nlin-1; f++) { 					// f = posi��es fixas
		cout<< endl << "linha Fixa: " << f;
		
		for (int s=f+1; s<nlin; s++) {    			// s = posi��es sucessoras
			
			cout << endl << "s= " << s;
			cout << endl << "Antes do IF e Antes da troca";
			cout << endl << "M1[f][0] " << m1[f][0];
			cout << endl << "M1[s][0] " << m1[s][0];
			cout << endl << "aux " << aux;
			
			if (m1[f][0] < m1[s][0]) {				// Ordenando a 1� coluna de M1 que � a 0
				aux 	 = m1[f][0];				// > crescente	
				m1[f][0] = m1[s][0];				// < decrescente
				m1[s][0] = aux;
			cout << endl << "Dentro do IF e depois da troca";
			cout << endl << "M1[f][0] " << m1[f][0];
			cout << endl << "M1[s][0] " << m1[s][0];
			cout << endl << "aux " << aux;
			}
			else{
				cout << endl << "N�O TROCOU";
			}
		}
	}	
	*/
	
	
	
	/*ordena�ao de linha
	
	int aux;
	for(int f=0; f<ncol-1; f++) { 					// f = posi��es fixas
		cout<< endl << "F= " << f;
		
		for (int s=f+1; s<ncol; s++) {    			// s = posi��es sucessoras
			
			cout << endl << "s= " << s;
			cout << endl << "Antes do IF e Antes da troca";
			cout << endl << "M1[f][0] " << m1[0][f];
			cout << endl << "M1[s][0] " << m1[0][s];
			cout << endl << "aux " << aux;
			
			if (m1[0][f] < m1[0][s]) {				// Ordenando a 1� linha de M1 que � a 0
				aux 	 = m1[0][f];				// > crescente	
				m1[0][f] = m1[0][s];				// < decrescente
				m1[0][s] = aux;
				
			cout << endl << "Dentro do IF e depois da troca";
			cout << endl << "M1[f][0] " << m1[0][f];
			cout << endl << "M1[s][0] " << m1[0][s];
			cout << endl << "aux " << aux;
			}
			else{
				cout << endl << "N�O TROCOU";
			}
		}
	}	
	*/
	
	
	for (int l=0; l<nlin; l++){ 
		for (int c=0; c<ncol; c++){
			cout << endl << " linha: " << l << " coluna: " << c << " numeros na matriz: " <<  m1[l][c];
		}		
	}
	
	cout<< endl << "---------------------------------" << endl;
	
	system ("pause");
	
	return 0;	
}



