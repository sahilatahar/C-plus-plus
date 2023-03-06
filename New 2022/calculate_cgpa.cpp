#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[] = {90, 80, 70, 60, 50}, sum = 0;
    int n = sizeof(arr) / sizeof(int);
    float cgpa;

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / 10;
        sum += arr[i];
    }

    cgpa = (float)(sum / n);
    cout << "CGPA is : " << cgpa << endl;
    ;
    getch();
    return 0;
}