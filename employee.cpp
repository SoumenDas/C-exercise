#include <iostream>

using namespace std;

struct Employee{
	int number;
	float salary;
};

int main(){
	Employee e1,e2,e3;
	
	cout << "Enter details of employee no 1: ";
	cin >> e1.number >> e1.salary;
	cout << "Enter details of employee no 2: ";
	cin >> e2.number >> e2.salary;
	cout << "Enter details of employee no 3: ";
	cin >> e3.number >> e3.salary;
	
	cout << "Employee "<< e1.number <<" has salary of "<< e1.salary << endl;
	cout << "Employee "<< e2.number <<" has salary of "<< e2.salary << endl;
	cout << "Employee "<< e3.number <<" has salary of "<< e3.salary << endl;
	return 0;
}
