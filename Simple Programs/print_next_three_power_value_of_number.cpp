//Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)

#include <iostream>
using namespace std;

int main() 
{
	int n;
	
	cout << "Enter the number: ";
	cin >> n;
	
	cout << "N^1 = " << n << endl;
	cout << "N^2 = " << n*n << endl;
	cout << "N^3 = " << n*n*n << endl;
	cout << "N^4 = " << n*n*n*n << endl;
	return 0;
	}