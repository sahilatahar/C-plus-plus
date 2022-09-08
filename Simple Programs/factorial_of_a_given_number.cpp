//Factorial of a Given Number

#include <iostream>
using namespace std;

int main() 
{
	int n;
	long fact = 1;
	
	cout << "Enter the number: ";
	cin >> n;
	
	for(int  i = n; i >= 1; i--) {
		fact *= i;
		}
		
	cout << "Factorial of " << n << " is : "<< fact;
	return 0;
	}
