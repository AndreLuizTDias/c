#include <iostream>
#include <locale>
using namespace std;

int main (){
	setlocale(LC_ALL, "ptb");
	
	int v1[5]={0,1,2,3,4}, v2[5]={9,8,7,6,5}, v3[10]={0,0,0,0,0,0,0,0,0,0};
	

 
/*	for(int l=0; l<5; l++) { 			// l = linhas
		cout << endl << l << " ª ocorrências de V1 - " << v1[l];
	}	
	for(int l=0; l<5; l++) { 			// l = linhas
		cout << endl << l << " ª ocorrências de V2 - " << v2[l];
	}	
	
	for(int l=0; l<10; l++) { 			// l = linhas
		cout << endl << l << " ª ocorrências de V3 - " << v3[l];
	}	
*/	
	
	// atribui valor do v1 e v2 a v3
	for(int i=0; i<5; i++) {
//		cout << "\n\nDigite a " << i+1 << "a ocorrência do vetor A: "; cin >> a[i];
//		cout << "\n\nDigite a " << i+1 << "a ocorrência do vetor B: "; cin >> b[i];
		v3[i]    = v1[i];
		v3[i+5]  = v2[i];
	}
	

	
	
	for(int l=0; l<10; l++) { 			// l = linhas
		cout << endl << l << " ª ocorrências de V3 - " << v3[l];
	}	
	return 0;
	
}
