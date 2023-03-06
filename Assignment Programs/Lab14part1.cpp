//  Find even & odd number

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else
    {
        cout << num << " is odd" << endl;
    }

    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}
