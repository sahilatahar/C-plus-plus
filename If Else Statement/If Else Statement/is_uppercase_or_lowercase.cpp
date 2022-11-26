//Check whether a character is an uppercase or lowercase alphabet.
//Input any character and check whether it is the alphabet, digit or special character.

#include <iostream>
using namespace std;

int main() 
{
	char c;
	
	cout << "Enter a character: ";
	cin >> c;

	if( (int)c >= 97 && (int)c <= 122)  {
		cout << c << " is an lowercase aphabet.";
		} else if((int)c >= 65 && (int)c <= 90){ 
		cout << c << " is an uppercase aphabet.";
			} else {
				cout << c << " is not an alphabet";
		}
   return 0;
   }
