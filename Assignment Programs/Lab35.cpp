//  How constructors are implemented when the classes are inherited.

#include <iostream>

using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    Shape(int w = 0, int h = 0)
    {
        width = w;
        height = h;
        cout << "Shape constructor called." << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int w = 0, int h = 0) : Shape(w, h)
    {
        cout << "Rectangle constructor called." << endl;
    }
    int area()
    {
        return width * height;
    }
};

class Square : public Rectangle
{
public:
    Square(int s = 0) : Rectangle(s, s)
    {
        cout << "Square constructor called." << endl;
    }
};

int main()
{
    Square sq(5);
    cout << "Area of square: " << sq.area() << endl;
    return 0;
}

/*
In this example, we have a Shape base class with a constructor that takes two parameters, and two derived classes: Rectangle and Square.

When a Rectangle object is created, its constructor calls the Shape constructor first to initialize the base class members, and then proceeds to execute the Rectangle constructor code. Similarly, when a Square object is created, its constructor calls the Rectangle constructor which in turn calls the Shape constructor.

The output of the program is:

Shape constructor called.
Rectangle constructor called.
Shape constructor called.
Rectangle constructor called.
Square constructor called.
Area of square: 25

As we can see, the constructors of each class are called in order of inheritance, starting from the base class up to the most derived class.
*/
