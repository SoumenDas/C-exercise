#include <iostream>

using namespace std;

class Time{
	private:
		int hr,min,sec;
	public:
		Time(): hr(0),min(0),sec(0){
		}
		Time(int h,int m,int s): hr(h),min(m),sec(s){
		}
		void add(Time a,Time b){
			sec = sec + a.sec + b.sec;
			if (sec > 60){
				min++;
			}
			min = min + a.min + b.min;
			if(min > 60){
				hr ++;
			}
			hr = hr + a.hr + b.hr;
			if(hr > 24){
				hr-=24;
			}
			
		}
		void display(){
			cout << hr<<":"<< min <<":"<<sec;
		}
};

int main(){
	const Time t1(13,34,02);
	const Time t2(12,20,12);
	Time t3;
	
	t3.add(t1,t2);
	t3.display();
	return 0;
}

