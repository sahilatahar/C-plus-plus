#include <iostream>
#include <string>
#include <conio.h>
#include "conversion_functions.cpp"
using namespace std;

string reverse(string);

int main()
{

    int decimalNo;
    cout << "Enter the decimal number: ";
    cin >> decimalNo;
    cout << "Binary Number is: " << decimalToBinary(decimalNo);
    getch();
    return 0;
}
