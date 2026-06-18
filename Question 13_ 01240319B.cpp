#include <iostream>
using namespace std;

int main()  {
	int a, b;
	
	cout<< "Enter two integers: ";
	cin>> a>> b;
	
	cout<<"Before swapping:" << endl;
	cout<< "a = " << a << ", b =" << b << endl;
	
	//Swap using using Xor operators
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	cout << " After swapping: " <<	 endl;
	cout<< "a = " << a << ", b = " << b <<endl;
	
	
	return 0;
	
}
