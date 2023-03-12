#include <iostream>
using namespace std;

int main(){
	
	int num;
	cout << "informe um numero:";
	cin >> num;
	
	if (num>0)
	{
		cout << num << " este numero e positivo";
	}
	else if (num<0)
	{
		cout << num << " este numero e negativo";
	}
	else
	{
		cout << num << " este numero e nulo";
	}
	
	
	return 0;
	
}
