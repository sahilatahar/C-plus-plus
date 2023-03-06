// Program to find greatest number in any array

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int size, max_num;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    max_num = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }

    cout << "The greatest number in the array is: " << max_num << endl;

    getch();
    return 0;
}
