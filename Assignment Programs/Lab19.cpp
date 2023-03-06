//  Write a C++ program use of object arrays

#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
private:
    int x;

public:
    MyClass(int val)
    {
        x = val;
    }
    void display()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    const int SIZE = 3;
    MyClass objs[SIZE] = {MyClass(10), MyClass(20), MyClass(30)};

    for (int i = 0; i < SIZE; i++)
    {
        objs[i].display();
    }

    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}
