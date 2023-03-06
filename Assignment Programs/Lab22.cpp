//  Use of dereferencing operators to access the class members.

#include <iostream>
#include <conio.h>
using namespace std;

class Box
{
private:
    int width;
    int height;
    int length;

public:
    Box()
    {
        width = 0;
        height = 0;
        length = 0;
    }
    Box(int w, int h, int l)
    {
        width = w;
        height = h;
        length = l;
    }
    int getVolume()
    {
        return width * height * length;
    }
};

int main()
{
    Box box1(2, 3, 4);
    Box *boxPtr;
    boxPtr = &box1;

    cout << "Volume of box1 = " << box1.getVolume() << endl;
    cout << "Volume of box1 using pointer = " << boxPtr->getVolume() << endl;

    getch();
    return 0;
}
