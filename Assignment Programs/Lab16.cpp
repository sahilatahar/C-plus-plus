//  Nesting of member functions

#include <iostream>
#include <conio.h>

using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    void setLength(int len)
    {
        length = len;
    }
    void setWidth(int wid)
    {
        width = wid;
    }
    int getArea()
    {
        return length * width;
    }
    void printArea()
    {
        cout << "The area of the rectangle is: " << getArea() << endl;
    }
    void getDimensions()
    {
        int len, wid;
        cout << "Enter length: ";
        cin >> len;
        setLength(len);

        cout << "Enter width: ";
        cin >> wid;
        setWidth(wid);

        printArea();
    }
};

int main()
{
    Rectangle rect;

    rect.getDimensions();

    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}
