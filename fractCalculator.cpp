#include <iostream>

using namespace std;

int main(){
	int fract1, fract2, fract3, fract4;
	char operatr, slash, cont;
	do{
	   cout << "Enter first number, operator, second number: ";
	   cin >> fract1 >> slash >> fract2 >> operatr >> fract3 >> slash >> fract4;
	
		switch (operatr){
			case '+':
				cout << "Answer: " << fract1 * fract4 + fract2 * fract3 << slash << fract2 * fract4 << endl;
				break;
			case '-':
				cout << "Answer: " << fract1 * fract4 - fract2 * fract3 << slash << fract2 * fract4 << endl;
				break;
			case '*':
				cout << "Answer: " << fract1 * fract3 << slash << fract2 * fract4 << endl;
				break;
			case '/':
				cout << "Answer: " << fract1 * fract4 << slash << fract2 * fract3 << endl;
				break;
			default:
				cout << "Unknown operator";	
		
		}
		cout<< "Calculate more (y/n): ";
		cin >> cont;
	}while (cont!='n');
	return 0;
}
