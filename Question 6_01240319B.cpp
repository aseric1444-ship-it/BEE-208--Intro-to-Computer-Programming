#include <iostream>
#include <cctype>  // For isupper()
using namespace std;

int main(){
	char ch;
	//Enter any Letter of your choice
	cout<< "Enter a character:";
	cin>> ch;
	
	if (isupper(ch) && (ch>= 'A' && ch <='Z')) {
		cout<< " Uppercase Letter" << endl;
	}else {
		cout<< "Not an Uppercase Letter" << endl;
	}
	
	return 0;
}
