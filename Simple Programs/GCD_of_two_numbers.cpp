//GCD of Two Numbers


#include <iostream>
using namespace std;

int main() 
{
	int firstNum,secondNum,hcf = 1;
	
	cout << "Enter two numbers: ";
	cin >> firstNum >> secondNum;
	
	for(int i = 2; i <= (firstNum < secondNum ? firstNum : secondNum ); i++ ) {
		if(firstNum % i == 0 && secondNum % i == 0 ) {
			hcf *= i;
			}
		}
	cout << "HCF/GCD of " << firstNum << " and " << secondNum << " is : " << hcf;
	return 0;
	}
