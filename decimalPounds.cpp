#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double pounds, shillings, pence, decimalPounds;
	
	cout << "Enter pounds: ";
	cin >> pounds;
	cout << "Enter shillings: ";
	cin >> shillings;
	cout <<"Enter pence: ";
	cin >> pence;
	
	double sum = pounds + (shillings/20) + ((pence/12)/20);
	decimalPounds = sum;
	cout << "Decimal Pounds: "<< (char)156 << setprecision(3) << decimalPounds;
	
	return 0;
}
