#include <iostream>

using namespace std;

int main(){
	
	const double ptod = 1.487;	//pound to dollar
	const double ftod =  0.172;	//franc to dollar
	const double gtod = 0.584; //german to dollar
	const double ytod = 0.00955; //yen to dollar
	double dollar;
	
	cout << "Welcome to Money conversion app. Kindly enter the dollar amount:"<< endl;
	cin >> dollar ;
	
	cout << dollar/ptod << " pounds"<<endl
		 << dollar/ftod << " francs"<<endl
		 << dollar/gtod << " deutschemark"<<endl
		 << dollar/ytod << " yen"<<endl;
	return 0;
}
