//  Function call by value & call by Reference

#include <iostream>
#include <conio.h>

using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;

    cout << "Before swapByValue: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    cout << "Before swapByReference: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}
