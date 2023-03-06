/*  If Amount is more than Rs. 300.00   than additional charge 15% is added.

    Write a program to read the names of users and number of units, cost consumed and print out the charges with names.
*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    string name;
    int units;
    float cost, charges;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter number of units: ";
    cin >> units;

    cout << "Enter cost per unit: ";
    cin >> cost;

    charges = units * cost;

    if (charges > 300)
    {
        charges += charges * 0.15;
    }

    cout << "Name: " << name << endl;
    cout << "Charges: Rs. " << charges << endl
         << endl;

    getch();
    return 0;
}
