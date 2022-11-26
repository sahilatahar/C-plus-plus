//LCM of Two Numbers

#include <iostream>
using namespace std;

int main() 
{
	int firstNum,secondNum,lcm = 1;
	
	cout << "Enter two numbers: ";
	cin >> firstNum >> secondNum;
	
	for(int i = 1; i <= (firstNum > secondNum ? firstNum : secondNum ); i++ ) {
		if(i % firstNum == 0 && i % secondNum== 0 ) {
			lcm *= i;
			}
		}
	cout << "LCM of " << firstNum << " and " << secondNum << " is : " << lcm;
	return 0;
	}
