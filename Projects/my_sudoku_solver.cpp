#include <iostream>
#include <conio.h>
using namespace std;

#define totalRows 9
#define totaColumns 9

bool isCorectPlace(int sudoku[totalRows][totaColumns], int row, int col, int num)
{
    // checking row
    for (int i = 0; i < totalRows; i++)
    {
        if (sudoku[row][i] == num)
            return false;
    }

    // cheking column
    for (int i = 0; i < totaColumns; i++)
    {
        if (sudoku[i][col] == num)
            return false;
    }

    // checking grid
    int rowStarting = row >= 6 ? 6 : (row >= 3 ? 3 : 0);
    int colStarting = col >= 6 ? 6 : (col >= 3 ? 3 : 0);
    for (int i = rowStarting; i < rowStarting + 3; i++)
    {
        for (int j = colStarting; j < colStarting + 3; j++)
        {
            if (sudoku[i][j] == num)
                return false;
        }
    }

    return true;
}

bool solveSudoku(int sudoku[totalRows][totaColumns], int row, int col)
{
    // if all box visited then return true
    if (row == totalRows - 1 && col == totaColumns)
        return true;

    // if column reached at last column then goto next row
    if (col == totaColumns)
    {
        row++;
        col = 0;
    }

    // if box is filled then check next box of column
    if (sudoku[row][col] > 0)
        return solveSudoku(sudoku, row, col + 1);

    // put 1 to 9 in box and checking conditions
    for (int num = 1; num <= 9; num++)
    { // checking conditions
        if (isCorectPlace(sudoku, row, col, num))
        {
            sudoku[row][col] = num;
            // if value filled in box then move to next box
            if (solveSudoku(sudoku, row, col + 1))
                return true;
        }
        sudoku[row][col] = 0;
    }
    return false;
}

int main()
{
    int sudoku[totalRows][totaColumns];
    // Example values to check
    //      {{3, 0, 6, 5, 0, 8, 4, 0, 0},
    //       {5, 2, 0, 0, 0, 0, 0, 0, 0},
    //       {0, 8, 7, 0, 0, 0, 0, 3, 1},
    //       {0, 0, 3, 0, 1, 0, 0, 8, 0},
    //       {9, 0, 0, 8, 6, 3, 0, 0, 5},
    //       {0, 5, 0, 0, 9, 0, 6, 0, 0},
    //       {1, 3, 0, 0, 0, 0, 2, 5, 0},
    //       {0, 0, 0, 0, 0, 0, 0, 7, 4},
    //       {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    cout << "Enter the Sudoku number.\nEnter 0 (zero) in place of empty: \n";
    for (int i = 0; i < totalRows; i++)
    {
        for (int j = 0; j < totaColumns; j++)
        {
            cin >> sudoku[i][j];
        }
    }
    cout << endl;

    if (solveSudoku(sudoku, 0, 0))
    {
        cout << "Solved Sudoku is here : \n";
        for (int i = 0; i < totalRows; i++)
        {
            for (int j = 0; j < totaColumns; j++)
            {
                cout << sudoku[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists";
    }
    getch();
    return 0;
}