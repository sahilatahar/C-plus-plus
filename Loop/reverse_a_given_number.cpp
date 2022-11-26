//Reverse A given Number

#include <iostream>
using namespace std;

int main() 
{
	int n,r,sum = 0;
	
	cout << "Enter the number: ";
	cin >> n;
	
	while(n !=0 ) {
		r = n % 10;
		sum = sum*10 + r;
		n = n/10;
		}
		
	cout << "Reverse number is: " << sum;
	return 0;
	}
