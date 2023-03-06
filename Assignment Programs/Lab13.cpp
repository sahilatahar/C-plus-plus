// Write a macro that obtain the largest of three numbers

#include <iostream>
#include <conio.h>
using namespace std;

#define MAX(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main()
{
    int x = 10, y = 20, z = 30;
    int max = MAX(x, y, z);

    cout << "The largest of " << x << ", " << y << ", and " << z << " is " << max << endl;

    getch();
    return 0;
}
