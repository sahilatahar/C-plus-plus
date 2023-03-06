// Write a function to read a matrix of size m x n from the keyboard

#include <iostream>
#include <conio.h>
using namespace std;

void read_matrix(int matrix[][100], int m, int n)
{
    cout << "Enter the elements of the " << m << " x " << n << " matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    getch();
    return 0;
}