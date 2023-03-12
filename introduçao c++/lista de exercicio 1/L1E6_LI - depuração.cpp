// L1E6.cpp
// Faça um programa que leia 5 valores alfanuméricos e ordene-os.
#include <iostream> 
using namespace std;
int main()
{
	// char, string, int, float, boolean
	string aux="", alfanum1="", alfanum2="", alfanum3="", alfanum4="", alfanum5="";
	int i=1;
/*	while (i <= 5) {
        cout << "Digite a " << i << "a de 5 String's: "; 
        if (i==1)
		   cin >> alfanum1; 
		else 
			if (i==2) 
			   cin >> alfanum2; 
			else 
				if (i==3) 
			   		cin >> alfanum3; 
				else 
					if (i==4) 
			   			cin >> alfanum4; 
					else 
						if (i==5) 
			   				cin >> alfanum5; 
		i++;
	}  */
	// Lendo o 1o valor
/*    cout << "Digite a " << i << "a de 5 String's: "; 
	cin >> alfanum1; 
	i++;
    cout << "Digite a " << i << "a de 5 String's: "; 
	cin >> alfanum2; 
	i++;
    cout << "Digite a " << i << "a de 5 String's: "; 
	cin >> alfanum3; 
	i++;
    cout << "Digite a " << i << "a de 5 String's: "; 
	cin >> alfanum4; 
	i++;
    cout << "Digite a " << i << "a de 5 String's: "; 
	cin >> alfanum5; 
*/
    alfanum1=2; alfanum2=8; alfanum3=1; alfanum4=4; alfanum5=6; // VI

	// fixando e comparando a posição 1		// > = ordenação crescente		< = ordenação decrescente
	if (alfanum1 > alfanum2) {		// 1o passo
    	aux      = alfanum1;
    	alfanum1 = alfanum2;
    	alfanum2 = aux;
	}
    if (alfanum1 > alfanum3) {		// 2o passo
    	aux      = alfanum1;
    	alfanum1 = alfanum3;
    	alfanum3 = aux;
	}
    if (alfanum1 > alfanum4) {		// 3o passo
    	aux      = alfanum1;
    	alfanum1 = alfanum4;
    	alfanum4 = aux;
	}
    if (alfanum1 > alfanum5) {		// 4o passo
    	aux      = alfanum1;
    	alfanum1 = alfanum5;
    	alfanum5 = aux;
	}
// fixando e comparando a posição 2
    if (alfanum2 > alfanum3) {		// passo 5
    	aux      = alfanum2;
    	alfanum2 = alfanum3;
    	alfanum3 = aux;
	}
    if (alfanum2 > alfanum4) {		// passo 6
    	aux      = alfanum2;
    	alfanum2 = alfanum4;
    	alfanum4 = aux;
	}
    if (alfanum2 > alfanum5) {		// passo 7
    	aux      = alfanum2;
    	alfanum2 = alfanum5;
    	alfanum5 = aux;
	}
	// DEPURAÇÃO da ORDENAÇÃO
	//        		====================PASSOS====================
	// 				VI	1	2	3	4	5	6	7	8	9	10	VF
	// alfanum1		2		1									1
	// alfanum2		8					2						2
	// alfanum3		1		2			8			4			4
	// alfanum4		4								8		6	6
	// alfanum5		6										8	8
	// aux					2			8			8		8	8
	//
// fixando e comparando a posição 3
    if (alfanum3 > alfanum4) {		// passo 8
    	aux      = alfanum3;
    	alfanum3 = alfanum4;
    	alfanum4 = aux;
	}
    if (alfanum3 > alfanum5) {		// passo 9
    	aux      = alfanum3;
    	alfanum3 = alfanum5;
    	alfanum5 = aux;
	}
    // fixando e comparando a posição 4
    if (alfanum4 > alfanum5) {		// passo 10
    	aux      = alfanum4;
    	alfanum4 = alfanum5;
    	alfanum5 = aux;
	}
	
	cout << endl << "As string's ordenadas sao: " << alfanum1 << " " << alfanum2 << " " << alfanum3 << " " << alfanum4 << " " << alfanum5 << endl;	
	
	return 0;
} // Fim de main()

