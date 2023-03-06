//  Write a C++ program use of static data member

#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
private:
    int x;
    static int count;

public:
    MyClass(int val)
    {
        x = val;
        count++;
    }
    void display()
    {
        cout << "Object " << count << ": x = " << x << endl;
    }
    static void displayCount()
    {
        cout << "Total number of objects created: " << count << endl;
    }
};

int MyClass::count = 0;

int main()
{
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(30);

    obj1.display();
    obj2.display();
    obj3.display();

    MyClass::displayCount();

    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}
