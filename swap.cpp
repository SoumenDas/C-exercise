#include <iostream>

using namespace std;

void swap(int&, int&);

int main(){
	int a,b;
	cout << "Enter 2 nos: ";
	cin >> a >> b;
	swap(a,b);
	cout << a <<" "<< b;
	return 0;
}

void swap(int& no1, int& no2){
	int temp = no1;
	no1 = no2;
	no2 = temp;
}
