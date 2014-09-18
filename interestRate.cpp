#include <iostream>

using namespace std;

int main(){
	double principal, rate, sum;
	int years;
	cout << "Enter initial amount: ";
	cin >> principal;
	cout << "Enter number of years: ";
	cin >> years;
	cout << "Enter interest rate (percent per year): ";
	cin >> rate;
	sum = principal;
	for(int i = 1; i<=years; ++i){
		sum += (sum * rate /100);
	}
	cout << "At the end of " << years <<" years, you will have "<< sum <<" dollars";
	return 0;
}
