#include <iostream>
#include <cmath> // pow() 
using namespace std; 

int main() {
	double radius, area;
	const double PI = 3.14159265359;
		
		// about to calculate for the radius of the circle
		cout <<"Enter the radius of the circle: ";
		cin>> radius;
	//the formula for the area of a circle	
		area= PI * pow(radius, 2);
		
		
cout<<"\nThe area of the circle is=" << area << endl;	
	
	
	
	return 0;
	
}
