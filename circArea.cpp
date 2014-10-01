#include <iostream>

using namespace std;

float circArea(float);

int main(){
	float radius;
	cout << "Enter radius: ";
	cin >> radius;
	
	cout << "Area of circle is: "<< circArea(radius);
		
	return 0;
}

float circArea(float r){
	return 3.14 * r * r;
}
