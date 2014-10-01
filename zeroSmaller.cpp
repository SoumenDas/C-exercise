#include <iostream>

using namespace std;

void zeroSmaller (int&, int&);

int main (){
	int a,b;
	cout << "Enter two nos: ";
	cin >> a >> b;
	zeroSmaller(a,b);
	cout << a <<" " << b;
	return 0;
}

void zeroSmaller(int& no1, int& no2){
	if(no1 > no2){
		no2 = 0;
	} else {
		no1 = 0;
	}
}


