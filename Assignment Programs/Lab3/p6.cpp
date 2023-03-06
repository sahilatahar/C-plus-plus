/*  Write a C++ program that will ask for a temperature in fahrenheit and display it in celsius.
 */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Fahrenheit to celsius conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius is: " << celsius << endl;

    getch();
    return 0;
}
