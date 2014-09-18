#include <iostream>

using namespace std;

int main() {
	unsigned int numb;
	unsigned long fact = 1;
	 do {
	 	cout << "Enter a number (0 to quit): ";
	 	cin >> numb;
	 	for (int i=1; i<=numb;++i){
	 		fact *= i;
	 	}
	 	cout << "Factorial is "<< fact << endl;
	 } while (numb != 0);
	return 0;
}
