#include <iostream>
#include <conio.h>
#include "conversion_functions.cpp"
using namespace std;

int main()
{
    string binaryNo;

    cout << "Enter the binary Number: ";
    cin >> binaryNo;

    cout << "Decimal no is : " << binaryToDecimal(binaryNo);
    getch();
    return 0;
}