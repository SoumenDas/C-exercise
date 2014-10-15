#include<iostream>

using namespace std;

class tollBooth {
	private:
		unsigned int payingCars,noPayingCars;
		double collection;
	public:
		tollBooth(): payingCars(0), collection(0),noPayingCars(0){
		}
		void payingCar(){
			collection += 0.50;
			payingCars++;
		}
		void nopayingCar(){
			noPayingCars ++;
		}
		void display(){
			cout << "Total cars passed: "<< payingCars + noPayingCars<<endl;
			cout<<"Total collections: "<< collection;
		}
		
};

int main(){
	char choice;
	tollBooth tollBooth1;
	do {
		cout << "Press P for paying car and N for non Paying car: ";
		cin >> choice;
		if (choice == 'p'){
			tollBooth1.payingCar();
		} else {
			tollBooth1.nopayingCar();
		}
		
	}while (choice != 'e');
	tollBooth1.display(); 
	
	return 0;
}
