#include <iostream>

using namespace std;

struct phone {
	int areaCode, exchange, number;
};

int main(){
	phone p1,p2;
	p1 = {212, 767, 8900};
	cout << "Enter your area code, exchange, and number: ";
	cin >> p2.areaCode >> p2.exchange >> p2.number  ;
	cout << "My number is (" << p1.areaCode <<") "<< p1.exchange <<"-"<<p1.number <<endl;
	cout << "Your number is (" << p2.areaCode <<") "<< p2.exchange <<"-"<<p2.number;
	return 0;
}
