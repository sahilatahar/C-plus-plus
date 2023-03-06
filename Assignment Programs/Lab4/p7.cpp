/*  Write a function using reference variable as arguments to swap the value of a pair of integer.
 */

#include <iostream>
#include <conio.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    getch();
    return 0;
}
