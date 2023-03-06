//  Array within the class

#include <iostream>
#include <conio.h>

using namespace std;

class Numbers
{
private:
    int nums[5];

public:
    void getNums()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter number " << i + 1 << ": ";
            cin >> nums[i];
        }
    }
    void printNums()
    {
        cout << "Numbers entered: ";
        for (int i = 0; i < 5; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Numbers myNums;

    myNums.getNums();
    myNums.printNums();

    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}
