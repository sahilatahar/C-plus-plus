#include <iostream>
#include <conio.h>
#include "conversion_functions.cpp"
using namespace std;

int main()
{
    int hexaDecimalNo;
    cout << "Enter the hexadecimal number: ";
    cin >> hexaDecimalNo;
    cout << "Decimal Number is: " << hexaDecimalToDecimal(hexaDecimalNo);
    getch();
    return 0;
}