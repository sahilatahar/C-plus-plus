/*  Write a program to print the following the output using for loops.
1
22
333
4444
55555
666666
7777777
88888888
- - - - -
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of lines: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
