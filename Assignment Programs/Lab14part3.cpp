// Find prime numbers

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }

    getch();
    return 0;
}
