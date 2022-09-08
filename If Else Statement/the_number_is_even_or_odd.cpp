//The Number Is Even or Odd
//Find whether a number is even or odd.

#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if(num % 2 == 0 )  {
		cout << num << " is an even number.";
				} else {
		cout << num << " is a odd number.";
				}
				
	return 0;
	}
