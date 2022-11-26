//The Number Is Positive or Negative
//Check whether a number is negative, positive or zero.

#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if(num == 0 )  {
		cout << num << " is zero.";
				} else if(num < 0 )  {
		cout << num << " is a nagative number.";
				} else  {
		cout << num << " is a positive number.";
				} 
				
	return 0;
	}
