#include <iostream>
#include <string>
using namespace std;

int main() {
	string binary;
	int decimal =0;
	
	cout<< " Enter a binary number: " ;
	cin>> binary;
	
	//convert binary to decimal
	for (char bit : binary) {
		decimal = decimal * 2 + (bit - '0');
	}
	
	
	
	cout<<"\nBinary Number: " << binary << endl;
	cout<< "\nDecimal: " << dec << decimal << endl;
	coutc<< "\noctal: " << oct << decimal << endl;
	cout<< "\nHexadecimal: " << hex << uppercase << decimal <<endl;
	
	
	
	return 0;
	
	
}
