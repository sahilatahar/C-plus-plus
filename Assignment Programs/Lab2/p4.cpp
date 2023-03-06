// Write a program to input an integer value from a keyboard and display on screen "Well done" that many times.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer value: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Well done" << endl;
    }

    getch();
    return 0;
}
