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
	
	/* ordenaçao de coluna
	int aux;
	for(int f=0; f<nlin-1; f++) { 					// f = posições fixas
		cout<< endl << "linha Fixa: " << f;
		
		for (int s=f+1; s<nlin; s++) {    			// s = posições sucessoras
			
			cout << endl << "s= " << s;
			cout << endl << "Antes do IF e Antes da troca";
			cout << endl << "M1[f][0] " << m1[f][0];
			cout << endl << "M1[s][0] " << m1[s][0];
			cout << endl << "aux " << aux;
			
			if (m1[f][0] < m1[s][0]) {				// Ordenando a 1ª coluna de M1 que é a 0
				aux 	 = m1[f][0];				// > crescente	
				m1[f][0] = m1[s][0];				// < decrescente
				m1[s][0] = aux;
			cout << endl << "Dentro do IF e depois da troca";
			cout << endl << "M1[f][0] " << m1[f][0];
			cout << endl << "M1[s][0] " << m1[s][0];
			cout << endl << "aux " << aux;
			}
			else{
				cout << endl << "NÃO TROCOU";
			}
		}
	}	
	*/
	
	
	
	/*ordenaçao de linha
	
	int aux;
	for(int f=0; f<ncol-1; f++) { 					// f = posições fixas
		cout<< endl << "F= " << f;
		
		for (int s=f+1; s<ncol; s++) {    			// s = posições sucessoras
			
			cout << endl << "s= " << s;
			cout << endl << "Antes do IF e Antes da troca";
			cout << endl << "M1[f][0] " << m1[0][f];
			cout << endl << "M1[s][0] " << m1[0][s];
			cout << endl << "aux " << aux;
			
			if (m1[0][f] < m1[0][s]) {				// Ordenando a 1ª linha de M1 que é a 0
				aux 	 = m1[0][f];				// > crescente	
				m1[0][f] = m1[0][s];				// < decrescente
				m1[0][s] = aux;
				
			cout << endl << "Dentro do IF e depois da troca";
			cout << endl << "M1[f][0] " << m1[0][f];
			cout << endl << "M1[s][0] " << m1[0][s];
			cout << endl << "aux " << aux;
			}
			else{
				cout << endl << "NÃO TROCOU";
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



