#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	for (int i = 0; i < 20; ++i){
		for(int j = 1; j <= 10; ++j){
			cout << setw(5) << number * (j + i * 10) << " ";
		}
		cout << endl;
	} 
	return 0;
}
