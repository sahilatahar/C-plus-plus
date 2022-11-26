//Input month number and print number of days in that month.


#include <iostream>
using namespace std;

int main() {
	int monthNo;
	
	cout << "Enter the month no: ";
	cin >> monthNo;
	
	if(monthNo == 2) {
		cout << "There are 28 days if year is not a leap year. otherwise 29 days.";
		} else if(monthNo == 1 || monthNo == 3 || monthNo == 5 || monthNo == 7 || monthNo == 8 || monthNo == 10 || monthNo == 12) {
		cout << "There are 31 days in this month.";
		} else { 
			cout << "There are 30 days in this month.";
			}
			
		return 0;
	}