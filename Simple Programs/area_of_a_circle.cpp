//Area of a Circle

#include <iostream>
using namespace std;

int main()
{
	const float pi = 3.14;
	float r,area;
	
	cout << "Enter the radius of circle: ";
	cin >> r;
	
	area = pi*r*r;
	
	cout << "Area of circle is: " << area;
	return 0;
	}
