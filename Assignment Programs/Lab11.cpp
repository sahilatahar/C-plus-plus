// Write a program to find the sum of 1 + 2 + 3 + 4 + 5 + _ _ _ _ + n

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    getch();
    return 0;
}
