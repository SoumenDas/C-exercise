#include <iostream>

using namespace std;

double power (double, int);

int main(){
	
	double no;
	int indice;
	cout << "Enter a no and its power: ";
	cin >> no >> indice;
	   	
	cout << power(no,indice);
	
	return 0;
}

double power(double n, int p = 2 ){
	double prod = 1;
	for (int i = 1; i <=p; i++){
		prod = prod * n;
	}
	return prod;
}
