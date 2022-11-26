#include <iostream>
#include <conio.h>
#include "conversion_functions.cpp"
using namespace std;

int main()
{

    int decimalNo;
    cout << "Enter the decimal number: ";
    cin >> decimalNo;
    cout << "Binary Number is: " << decimalToBinary(decimalNo);
    getch();
    return 0;
}
