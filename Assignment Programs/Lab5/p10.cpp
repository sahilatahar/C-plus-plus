// Write a program to calculate average marks of 30 students

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num_students = 30;
    float marks[num_students], sum = 0, avg;

    cout << "Enter marks of " << num_students << " students:\n";
    for (int i = 0; i < num_students; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    avg = sum / num_students;

    cout << "The average marks of " << num_students << " students is: " << avg << endl;

    getch();
    return 0;
}
