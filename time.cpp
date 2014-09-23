#include <iostream>

using namespace std;

struct Time{
	int hours,minutes,seconds;
};

int main(){
	Time time;
	cout << "Enter current time: ";
	cin >> time.hours >>time.minutes>>time.seconds;
	
	int totalSec = time.hours*3600 + time.minutes*60 + time.seconds;
	cout << "Total seconds is: "<<totalSec;
	return 0;
}
