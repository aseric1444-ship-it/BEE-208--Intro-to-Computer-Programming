#include <iostream>
using namespace std;

int main()
{
	int num1,num2;
	//two integers
	cout << "Enter first integer:" ;
	cin >> num1;
	
	cout<< "Enter second integer:" ;
	cin >> num2;
	
//Calculation of the individual operations
	
cout << "\nThe sum of the number is=" <<num1 + num2 << endl ;
cout << "The difference of the number is=" << num1- num2 << endl;
cout << "the product of the numbers is=" << num1 * num2 << endl;

if ( num2 != 0 ) { 
cout << " The quotient is=" << (double) num1 / num2 << endl;
}
 else{ 
cout << "Division:(division by zero is not allowed)" << endl;
}

return 0;
}
	

