#include <iostream>

using namespace std;

struct time {
	int hr,min,sec;
};

void swap(time&, time&);

int main(){
	time t1 = {12,59,59};
	time t2 = {11,34,20};
	
	cout << "T1 is "<< t1.hr<<":" <<t1.min <<":"<<t1.sec <<endl;
	cout << "T2 is "<< t2.hr<<":" <<t2.min <<":"<<t2.sec <<endl;
	cout << "After swapping: "<<endl;
	swap(t1,t2);
	cout << "T1 is "<< t1.hr<<":" <<t1.min <<":"<<t1.sec<<endl;
	cout << "T2 is "<< t2.hr<<":" <<t2.min <<":"<<t2.sec<<endl;
	return 0;
}

void swap(time& t1, time& t2){
	time temp = t1;
	t1 = t2;
	t2 = temp;
}
