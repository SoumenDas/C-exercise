#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout << setiosflags(ios::left) 
		 << setw(12) << "Last name" 
		 << setw(12) <<"First name"
		 << setw(18) << "Street address" 
		 << setw(15) << "Town"
		 << setw(7) << "State"
		 <<endl;
		// setiosflags(ios::left);
    cout << setiosflags(ios::left) 
		 << setw(12) << "Jones"
		 << setw(12) << "Bernard" 
		 << setw(18) << "109, Pine Lane"
		 << setw(15) << "Little Town"
		 << setw(7) << "MI"
		 << endl;
    cout << setiosflags(ios::left) 
		 << setw(12) << "O'Brian"
		 << setw(12) << "Colleen" 
		 << setw(18) << "42 E. 99th Ave."
		 << setw(15) << "Bigcity"
		 << setw(7) << "NY"
		 << endl;
    cout << setiosflags(ios::left) 
		 << setw(12) << "Wong"
		 << setw(12) << "Harry" 
		 << setw(18) << "121-A Alabama St"
		 << setw(15) << "Lakeville"
		 << setw(7) << "IL"
		 << endl;
		 
	return 0;
}

