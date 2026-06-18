#include <iostream>
using namespace std;


int main() {
	float num1, num2;
	// Entering the two numbers
	cout << "Enter first floating-point number:" ;
	cin>> num1;
	
	cout<< "\nEnter second floating-piont numbers:" ;
	cin>> num2;
	
	float larger =(num1 > num2) ? num1 : num2;
	
	cout << "\nThe larger number is: " <<larger << endl;
	
	
	return 0;
}

