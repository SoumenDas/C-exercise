#include <iostream>

using namespace std;

int main(){
	double celsius = 0;
	cout<< "Welcome to temperature conversion app. Enter celsius degrees: "<< endl;
	cin >> celsius;
	double fahrenheit = (celsius * 9)/5 + 32;
	cout << "Its "<< fahrenheit <<" degree fahrenheit";
	return 0;
}
