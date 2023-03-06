//  Find factorial of n natural no.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, fact = 1;

    cout << "Enter a natural number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " is " << fact << endl;
    getch();
    return 0;
}
