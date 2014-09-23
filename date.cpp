#include <iostream>

using namespace std;

struct Date{
	int day,month,year;
};

int main(){
	Date date;
	cout <<"Enter date in the format day/month/year: ";
	cin >> date.day >>date.month >> date.year;
	cout << "You have entered: " << date.day <<"/"<<date.month <<"/"<<date.year;
	return 0;
}
