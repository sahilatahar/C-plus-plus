//Calculate Sum of Natural Numbers

#include <iostream>
using namespace std;

int main() {
	
	int n,i,sum = 0;
	
	cout << "Enter the range: ";
	cin >> n;
	
	for( i = 1; i <= n; i++) {
		sum += i;
		}
		
		cout << "Sum of " << n << " natural number is: " << sum;
	return 0;
	}
