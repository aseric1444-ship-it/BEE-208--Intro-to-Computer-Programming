#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout<< " Enter an integer:" ;
	cin>> num;
	// To check if the integer is both and odd number and also divisible by 3.
	if ((num % 2 !=0) && (num % 3 == 0)) {
		cout<< "The number is oddand divisble by 3." <<endl;
		
	}else {
		cout<< "The number is not both odd and divisible by 3." <<endl;
	}
	
	
	
	return 0;
}
