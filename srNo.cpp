#include <iostream>

using namespace std;

class SrNo{
	private:
		static int countItems;
		int serial;
	public:
		SrNo(){
			countItems ++;
			serial = countItems;
		}
	void display(){
		cout <<"I am object no " << serial<<endl;
	}
};

int SrNo::countItems = 0;
int main(){
	SrNo s1;
	SrNo s2;
	s1.display();
	s2.display();
	return 0;
}
