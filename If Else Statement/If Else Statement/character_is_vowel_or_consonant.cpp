﻿//Character Is Vowel or Consonant
//Input any alphabet and check whether it is vowel or consonant.

#include <iostream>
using namespace std;

int main() 
{
	char c;
	
	cout << "Enter a character: ";
	cin >> c;
	
	if( c == 'a' || c == 'e' || c== 'i' || c== 'o' || c== 'u' || c == 'A' || c == 'E' || c== 'I' || c== 'O' || c== 'U') {
		cout << c << " is a vowel.";
		} else {
			cout << c << " is a constant.";
			}
	return 0;
	}
