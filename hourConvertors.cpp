#include <iostream>

using namespace std;

long hrs_to_sec(int, int , int);

int main(){
	int hr,min,sec;
	char colon, choice;
	do{
		cout <<"Enter time in 12:59:59 format: ";
		cin >> hr >>colon >> min >> colon >> sec;
		cout << hrs_to_sec(hr,min, sec) <<" seconds"<<endl;
		cout << "Do you want to continu (y/n): ";
		cin >> choice;
	} while (choice == 'y');
	return 0;
}

long hrs_to_sec(int h, int m, int s){
	return 3600 * h + 60 * m + s;
}
