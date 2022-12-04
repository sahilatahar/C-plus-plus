// An Stopwatch

#include <iostream>
#include <conio.h>
#include <unistd.h>
#include <direct.h>

using namespace std;
int main()
{
    int hour = 0, minute = 0, second = 0;

    cout << "Press any key to start- " << endl;
    cout << "Stopwatch :\t" << hour << " : " << minute << " : " << second << endl;
    getch();
    while (!kbhit())
    {
        second++;
        sleep(1);
        system("cls");
        system("Color 17");
        if (second == 60)
        {
            minute++;
            second = 0;
        }
        if (minute == 60)
        {
            hour++;
            minute = 0;
        }
        cout << "Stopwatch :\t" << hour << " : " << minute << " : " << second << endl;
        cout << "Press any key to stop?";
    }
    system("Color 07");
    getch();
    return 0;
}