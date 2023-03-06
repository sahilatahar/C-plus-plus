//  Copy Constructors, Dynamic Constructor

/*
Copy Constructor:
A copy constructor is a constructor that creates an object by initializing it with an object of the same class, which has been created previously. The copy constructor is used to create a copy of an existing object.

Dynamic Constructor:
Dynamic memory allocation is a method of allocating memory during the execution of a program. In C++, the new operator is used to allocate dynamic memory. A dynamic constructor is a constructor that allocates dynamic memory for an object during its creation.

Example of Copy Constructor and Dynamic Constructor:
*/

#include <iostream>
#include <conio.h>
using namespace std;

class Test
{
private:
    int *ptr;

public:
    Test(int x)
    {
        ptr = new int;
        *ptr = x;
    }
    Test(const Test &t)
    {
        ptr = new int;
        *ptr = *t.ptr;
    }
    void display()
    {
        cout << "Value: " << *ptr << endl;
    }
};

int main()
{
    Test t1(10);  // using dynamic constructor to allocate memory
    Test t2 = t1; // using copy constructor to create a copy of t1 object
    t1.display();
    t2.display();
    getch();
    return 0;
}
