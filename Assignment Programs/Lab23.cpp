//  Passing of arguments to the constructor function

#include <iostream>
#include <conio.h>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
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
    Rectangle rect(4, 5);

    cout << "Area of rectangle = " << rect.getArea() << endl;

    getch();
    return 0;
}
