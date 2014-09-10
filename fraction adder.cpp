#include <iostream>

using namespace std;

int main(){
	int a,b,c,d;
	char slash;
	cout << "Enter first fraction: ";
	cin >> a >> slash >> b;
	cout << "Enter second fraction: ";
	cin >> c >> slash >> d;
	cout << "sum: "<<  a * d + c * b << slash << b * d;
	return 0;
}
