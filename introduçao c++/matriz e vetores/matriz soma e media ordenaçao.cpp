//Calcular a media entre a 1� coluna e 2� coluna e grava na 3� coluna 
//Calcular a soma das 3 primeiras colunas e grava na 4� coluna
#include <iostream>
#include <locale>
using namespace std;
const int nlin=4, ncol=5;

int main (){
	setlocale(LC_ALL, "ptb");
	
	//double v1[nlin]={0};  vetor1
	
	double m1[nlin][ncol]={{10,15,0,0},{8,6,0,0},{9,3,0,0},{5,4,0,0}};
	
	
	cout << endl <<":::::::::::::::";
	cout << endl << "MATRIZ INICIAL";
	cout << endl <<":::::::::::::::";
	
	
	/* mostra valores V1
	for (int l=0; l<nlin; l++){ 
			cout << endl << " linha " << l << ": "<< v1[l];			
	}
	*/
   
   // mostra m1	
	for (int l=0; l<nlin; l++){ 
		for (int c=0; c<ncol; c++){
			cout << endl << " linha: " << l << " coluna: " << c << " numeros na matriz: " <<  m1[l][c];
		}		
	}
	
	// ordena�ao descrescente
	int aux;
	for(int f=0; f<nlin-1; f++) { 					// f = posi��es fixas
		cout << endl << "f - " << f;
		for (int s=f+1; s<nlin; s++) {    			// s = posi��es sucessoras
			if (m1[f][0] < m1[s][0]) {				// Ordenando a 1� coluna de M1 que � a 0
				aux 	 = m1[f][0];
				m1[f][0] = m1[s][0];
				m1[s][0] = aux;
			}
		}
	}	
	
	for (int l=0; l<nlin; l++){ 
		for (int c=0; c<ncol; c++){
			cout << endl << " linha: " << l << " coluna: " << c << " numeros na matriz: " <<  m1[l][c];
		}		
	}
	
	
	
	// atribi valor a 5� coluna
	for (int l=0; l<=3; l++){
		cout<< endl << "informe o valor de avr " << l+1;
		for (int c=0; c<=0; c++)
		{
			cout<< endl << "valor "<< c+1 <<": ";
			cin >> m1[l][3];		
		}		
	}
	
	
	// media 1� + 2� coluna
	for(int l=0; l<nlin; l++) {
	m1[l][2] = (m1[l][0]+m1[l][1])/2;
	}
	
	// somo todos os valores
	for(int l=0; l<nlin; l++) {
	m1[l][4] = (m1[l][0]+m1[l][1]+m1[l][2]+m1[l][3]);
	}
	
	cout << endl <<"::::::::::::::::::::::::::::::::::";
	cout << endl <<"depois da media e soma dos valores";
	cout << endl <<"::::::::::::::::::::::::::::::::::";
	
	// mostra valores mais sofisticado kk
	for(int l=0; l<nlin; l++) {
		for (int c=0; c<ncol; c++) {
				if (c<2)
				cout << endl << l+1 << "� linha, " << c+1 << "� coluna " << m1[l][c];
					else if (c==2)
					cout << endl << "media: " << m1[l][c];
					else if (c==3)
					cout << endl << "Avr: " << m1[l][c];
					else
					cout << endl << "a soma de todos os valores: " << m1[l][c];
		}
		cout << endl <<"::::::::::::::::::::::::::";	
	}
	return 0;
	
}
