#include <iostream>
using namespace std;

int main() {
	long long binary, decimal = 0, base =1, reminder;
	
	cout<< "Enter a binary number:" ;
	cin>> binary;
	
	while (binary > 0){
	reminder = binary % 10;
	decimal += reminder * base;
	base *= 2 ;
	binary /= 10;
	}
	
	cout <<" Decimal equivalent=" <<decimal << endl;
	
	return 0;
	
}
