//  Constructors with default arguments

#include <iostream>
#include <conio.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructor with default arguments
    Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
    }

    void setLength(int l)
    {
        length = l;
    }

    void setBreadth(int b)
    {
        breadth = b;
    }

    int getArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r1;       // Object created with default values
    Rectangle r2(5);    // Object created with default breadth value of 0
    Rectangle r3(2, 3); // Object created with both values passed

    cout << "Area of r1: " << r1.getArea() << endl;
    cout << "Area of r2: " << r2.getArea() << endl;
    cout << "Area of r3: " << r3.getArea() << endl;

    getch();
    return 0;
}
