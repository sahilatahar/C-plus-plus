//The Greatest Number Among the Given Three Number

#include <iostream>
using namespace std;

int main() 
{
	int firstNum,secondNum,thirdNum;
	
	cout << "Enter three numbers: ";
	cin >> firstNum >> secondNum >> thirdNum;
	
	if(firstNum > secondNum && firstNum > thirdNum) {
		cout << firstNum << " is the greatest number among all.";
		} else if(secondNum > firstNum && secondNum > thirdNum) {
		cout << secondNum << " is the greatest number among all.";
		} else if(thirdNum > secondNum && thirdNum > firstNum) {
		cout << thirdNum << " is the greatest number among all.";
		} else 
	return 0;
	}
