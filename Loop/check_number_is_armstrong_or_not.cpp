//Check Number Is Armstrong Or Not

#include <iostream>
using namespace std;

int main() 
{
	int n,n2,r,sum = 0;
	
	cout << "Enter the number: ";
	cin >> n;
	n2 = n;
	while(n2 !=0 ) {
		r = n2 % 10;
		sum += r*r*r;
		n2 = n2/10;
		}
	
		if(sum == n) {
			cout << n << " is an armstrong number.";
			} else {
			cout << n << " is not an armstrong number.";
			}
	return 0;
	}
