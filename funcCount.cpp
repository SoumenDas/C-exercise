#include <iostream>

using namespace std;

void eg(){
	static int count = 0;
	count ++;
	cout << "I have been called "<< count<<" times" <<endl;
}

int main(){
	eg();
	eg();
	eg();
	return 0;
}
