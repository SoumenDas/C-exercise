#include <iostream>

using namespace std;

int main(){
	for (int i=0; i<20; ++i){
		for (int j=39/2- i; j>=1; --j){
			cout << " ";
		}
		for (int g=0; g <1+ 2*i; g ++){
			cout << "x";
		}
		cout << endl;
	}
	return 0;
}
