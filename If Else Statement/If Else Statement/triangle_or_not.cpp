// Input angles of a triangle and check whether the triangle is valid or not.

#include <iostream>
using namespace std;

int main() 
{
	int angle[3];
	
	cout << "Enter three angles of triangle: ";
	cin >> angle[0] >> angle[1] >> angle [2];
	
	if((angle[0] + angle[1] + angle[2] ) != 180) {
		cout << "This is not a triangle.";
		} else {
			cout << "This is a triangle.";
			}
	return 0;
	}