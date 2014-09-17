#include <iostream>

using namespace std;

int main(){
	double operand1, operand2;
	char operatr;
	cout << "Enter first number, operator, second number: ";
	cin >> operand1 >> operatr >> operand2;
	
	switch (operatr){
		case '+':
			cout << "Answer: " << operand1 + operand2;
			break;
		case '-':
			cout << "Answer: " << operand1 - operand2;
			break;
		case '*':
			cout << "Answer: " << operand1 * operand2;
			break;
		case '/':
			cout << "Answer: " << operand1 / operand2;
			break;
		default:
			cout << "Unknown operator";	
	}
	return 0;
}
