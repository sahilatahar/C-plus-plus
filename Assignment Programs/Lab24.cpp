//  Overloading Constructors

#include <iostream>
#include <conio.h>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle()
    {
        width = 0;
        height = 0;
    }
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect1;       // calls default constructor
    Rectangle rect2(4, 5); // calls parameterized constructor

    cout << "Area of rectangle 1 = " << rect1.getArea() << endl;
    cout << "Area of rectangle 2 = " << rect2.getArea() << endl;

    getch();
    return 0;
}
