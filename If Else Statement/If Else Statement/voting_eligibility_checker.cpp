//Voting Eligibility Checker


#include <iostream>
using namespace std;

int main() {
	int age;
	
	cout << "Enter your age: ";
	cin >> age;
	
	if(age > 18) {
		cout << "You are eligible for voting.";
		} else {
		cout << "You are not eligible for voting.You wil be eligible in next " << 18 - age << " years.";
			}

		return 0;	
	}