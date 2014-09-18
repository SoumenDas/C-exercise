#include <iostream>

using namespace std;

int main(){
	int guest, chairs;
	int arrangements = 1;
	
	cout << "Enter no. of guests: ";
	cin >> guest;
	cout << "Enter no. of chairs: ";
	cin >> chairs;
	
	for (int i = 1; i<=chairs; ++i){
		arrangements *= guest;
		--guest; 
	}
	cout <<"No. of possible arrangements is: "<< arrangements;
	return 0;
}
