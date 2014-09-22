#include <iostream>

using namespace std;

struct Distance{
	int feet;
	float inches;
};

struct Volume{
	Distance length;
	Distance breadth;
	Distance height;
}; 

int main(){
	float l,b,h;
	Volume room1 = {{16,3.5},{12,6.25},{8,1.75}};
	
	l = room1.length.feet + room1.length.inches/12.0;
	b = room1.breadth.feet + room1.breadth.inches/12.0; 
	h = room1.height.feet + room1.height.inches/12.0;
	
	cout << "Volume = " << l*b*h << " cubic feet";
	return 0;
}
