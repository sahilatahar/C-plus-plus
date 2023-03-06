//* Write a program to read two number from the keyboard and display the large value on the screen

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    /*  Normal way */
    if (num1 > num2)
    {
        cout << "Larger value is " << num1 << endl;
    }
    else
    {
        cout << "Larger value is " << num2 << endl;
    }

    /*  Smart way */
    // cout << "Larger value is " << (num1 > num2 ? num1 : num2) << endl;
    getch();
    return 0;
}
