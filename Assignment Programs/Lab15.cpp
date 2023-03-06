//  C++ program with class

#include <iostream>
#include <conio.h>

using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    int x = 5, y = 10;
    Calculator calc;

    int sum = calc.add(x, y);

    cout << "The sum of " << x << " and " << y << " is " << sum << endl;

    getch();
    return 0;
}
