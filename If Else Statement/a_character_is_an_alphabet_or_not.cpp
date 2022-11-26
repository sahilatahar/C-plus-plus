// A Character Is an Alphabet or Not
//Check whether a character is an alphabet or not.

#include <iostream>
using namespace std;

int main() 
{
	char c;
	
	cout << "Enter a character: ";
	cin >> c;

	if( (int)c >= 97 && (int)c <= 122 || (int)c >= 65 && (int)c <= 90) {
		cout << c << " is an aphabet.";
		} else { 
		cout << c << " is not an aphabet.";
			}
   return 0;
   }
