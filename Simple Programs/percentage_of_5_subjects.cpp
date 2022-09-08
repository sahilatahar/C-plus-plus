//Percentage of 5 Subjects

#include <iostream>
using namespace std;

int main() 
{
	float marks[5];
	float totalMarks = 0,per;
	
	for(int i = 0; i < 5; i++ ) {
	   cout << "Enter the marks of subject " << i+1 <<": ";
	   cin >> marks[i];
	   totalMarks += marks[i];
		}
		
	per = totalMarks / 5.0;
	cout << "Total percentage is: "<< per;
		
	return 0;
	}