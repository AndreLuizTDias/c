// L1E6.cpp
// Faça um programa que leia 5 valores alfanuméricos e ordene-os.
#include <iostream> 
using namespace std;
int main()
{
	string aux, alfanum1="", alfanum2="", alfanum3="", alfanum4="", alfanum5="";
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
    cout << "Digite a " << i << "a de 5 String's: "; 
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

    // fixando e comparando a posição 1
	if (alfanum1 > alfanum2) {
    	aux      = alfanum1;
    	alfanum1 = alfanum2;
    	alfanum2 = aux;
	}
    if (alfanum1 > alfanum3) {
    	aux      = alfanum1;
    	alfanum1 = alfanum3;
    	alfanum3 = aux;
	}
    if (alfanum1 > alfanum4) {
    	aux      = alfanum1;
    	alfanum1 = alfanum4;
    	alfanum4 = aux;
	}
    if (alfanum1 > alfanum5) {
    	aux      = alfanum1;
    	alfanum1 = alfanum5;
    	alfanum5 = aux;
	}
    // fixando e comparando a posição 2
    if (alfanum2 > alfanum3) {
    	aux      = alfanum2;
    	alfanum2 = alfanum3;
    	alfanum3 = aux;
	}
    if (alfanum2 > alfanum4) {
    	aux      = alfanum2;
    	alfanum2 = alfanum4;
    	alfanum4 = aux;
	}
    if (alfanum2 > alfanum5) {
    	aux      = alfanum2;
    	alfanum2 = alfanum5;
    	alfanum5 = aux;
	}
    // fixando e comparando a posição 3
    if (alfanum3 > alfanum4) {
    	aux      = alfanum3;
    	alfanum3 = alfanum4;
    	alfanum4 = aux;
	}
    if (alfanum3 > alfanum5) {
    	aux      = alfanum3;
    	alfanum3 = alfanum5;
    	alfanum5 = aux;
	}
    // fixando e comparando a posição 4
    if (alfanum4 > alfanum5) {
    	aux      = alfanum4;
    	alfanum4 = alfanum5;
    	alfanum5 = aux;
	}
	
	cout << endl << "As string's ordenadas sao: " << alfanum1 << " " << alfanum2 << " " << alfanum3 << " " << alfanum4 << " " << alfanum5 << endl;	
	
	return 0;
} // Fim de main()

