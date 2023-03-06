// Read two number from the keyboard and display their average on the screen.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int n1, n2;
    float avg;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    avg = (n1 + n2) / 2;

    cout << "Average of " << n1 << " and " << n2 << " is: " << avg << endl;
    getch();
    return 0;
}