//Area of Triangle
#include <iostream>

using namespace std;

int main() {
	float height,width,area;
	cout << "Enter the height of triangle: ";
	cin >> height;
	cout << "Enter the width of triangle: ";
	cin >> width;
	
	area =( height * width)/2;
	
	cout << "Area of triangle is: " << area;
	return 0;
	}
