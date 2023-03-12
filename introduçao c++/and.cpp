#include <iostream>
using namespace std;

int main(void){
	
	int a,b,c,d;
	bool r, r1, aux;
	a=5;
	b=10;
	c=15;
	d=20;	
	r=(a>c && d>b);
	r1=(b+c>=a+d);
	cout << r << "" << r1 << endl;
	
	aux=r;
	r=r1;
	r1=aux;
	cout << r << "" << r1 << endl;
	
	return 0;
	
}
