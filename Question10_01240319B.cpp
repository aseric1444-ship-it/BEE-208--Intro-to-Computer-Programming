#include <iostream>
using namespace std;

int main() {
	int num1, num2, larger;
	// Entering two number to see the largest number
	cout<< "Enter two integers:" ;
	cin>> num1>>num2;
	
	larger = (num1> num2) ? num1 :num2;
	
	cout<< "\nThe largest number is: " << larger<< endl;
	
	return 0;
}
