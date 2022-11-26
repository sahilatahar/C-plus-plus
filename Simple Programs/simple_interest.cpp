// Simple Interest

#include <iostream>
using namespace std;

int main()
{
	float r,y,p,si;
	
	cout << "Enter the principle: ";
	cin >> p;
	cout << "Enter the rate: ";
	cin >> r;
	cout << "Enter the year: ";
	cin >> y;
	
	si = (p*r*y) / 100.0;
	
	cout << "Simple Interest is: " << si;
	return 0;
	}