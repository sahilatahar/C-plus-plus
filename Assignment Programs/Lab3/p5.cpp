// Write a program to read the values of a, b and c and display the display the value of x, where x = a / b - c

/*
    Test your program for the following value
    (a) a = 250, b = 85, c = 25
    (b) a = 300, b = 70, c = 70
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b, c;
    float x;
    /* ============== By Reading Values ===============
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    x = ((float)(a / b) - c);

    cout << "The value of x is: " << x << endl;    ======= */

    /* ============== By Putting Values =============== */
    // (a)
    a = 250;
    b = 85;
    c = 25;

    x = ((float)(a / b) - c);
    cout << "(a) The value of x is: " << x << endl;

    // (b)
    a = 300;
    b = 70;
    c = 70;
    x = ((float)(a / b) - c);

    cout << "(b) The value of x is: " << x << endl;

    getch();
    return 0;
}
