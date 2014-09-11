#include <iostream>

using namespace std;

int main() {
	float decPounds;
	int pounds;
	float decfranc;
	cout << "Enter decimal pounds: ";
	cin >> decPounds;
	pounds = static_cast<int>(decPounds);
	decfranc = decPounds - pounds;
	double shillings = decfranc * 20;
	cout << "Equivalent in old notation: "<<char(156)<<pounds<<"."<<shillings;
	return 0;
}
