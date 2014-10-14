#include <iostream>

using namespace std;

class Int {
	private:
		int no;
	public:
		Int ():no(0){
		}
		Int (int a):no(a){
		}
		void display(){
			cout << "The no is: "<< no << endl;
		}
		int add(Int a){
			return a.no + no;
		}
};

int main(){
	Int a;
	Int b(2);
	a.display();
	b.display();
	cout<<"Addition is: "<<a.add(b);
	return 0;
}
