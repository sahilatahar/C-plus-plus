//  Write a program use of friend functions

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
    friend void display(MyClass obj);
};

void display(MyClass obj)
{
    cout << "x = " << obj.x << endl;
}

int main()
{
    MyClass obj(10);

    display(obj);

    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}
