#include <iostream>

using namespace std;

int main() {
	char choice;
	double temp;
	
	cout << "Type 1 to convert Farenheit to Celsius,"<< endl
		 << "     2 to convert Celsius to Farenheit: ";
    cin >> choice;
    switch(choice){
    	case '1':
    		cout << "Enter temperature in Farenheit: ";
    		cin >> temp;
    		cout << "In Celsius thats "<< (temp - 32)*5/9;
    		break;
   		case '2':
   			cout << "Enter temperature in Celsius: ";
    		cin >> temp;
    		cout << "In Fahrenheit thats "<< (temp * 9)/5 + 32;
    		break;
    }
	
	return 0;
}
