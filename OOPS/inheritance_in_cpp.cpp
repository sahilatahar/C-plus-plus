#include <iostream>
#include <conio.h>

using namespace std;

// Inharitance syntax : class derived-class: access-specifier base-class

class Shape
{
protected:
    float width;
    float height;

public:
    void setWidth(float newWidth)
    {
        width = newWidth;
    }
    void setHeight(float newHeight)
    {
        height = newHeight;
    }
};

class Reactangle : public Shape
{
public:
    void displayArea()
    {
        cout << "Area of rectangle is : " << width * height;
    }
};

int main()
{

    Reactangle Rect;

    Rect.setWidth(12);
    Rect.setHeight(15);
    Rect.displayArea();
    getch();
    return 0;
}
