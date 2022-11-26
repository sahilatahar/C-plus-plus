#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>

#include "conversion_functions.cpp"
using namespace std;

int main()
{
    int octalNo;
    cout << "Enter the octal number: ";
    cin >> octalNo;

    cout << "Binary Number is: " << octalToBinary(octalNo);
    getch();
    return 0;
}
