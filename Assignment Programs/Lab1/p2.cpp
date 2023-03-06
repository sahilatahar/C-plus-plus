/*  Write a program to display the following output using single cout statement

    Math = 90
    Physics = 70
    Chemistry = 80
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    //  First method
    // cout << "Math = 90\nPhysics = 70\nChemistry = 80\n";
    //  Second method
    cout << "Math = 90" << endl
         << "Physics = 70" << endl
         << "Chemistry = 80";
    getch();
    return 0;
}