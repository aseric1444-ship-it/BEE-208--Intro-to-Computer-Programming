#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	
	cout<<" Enter first integer:";
	cin>> num1;
	
	cout<<" \nEnter second integer:";
	cin>> num2;
	
	//Entering two numbers to see which one is greater than the other 
	if(num1> num2) {
		cout<< " First value is greater"<< endl;
	}else{
		cout<<" Second value is greater" << endl;
	}
	
	
	
	return 0;
}
