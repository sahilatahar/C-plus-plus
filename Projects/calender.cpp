// Program to print the calender of the month after 1980

#include <iostream>
#include <conio.h>

using namespace std;

int getDaysInMonth(int, int);
bool isLeapYear(int);

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

enum Month
{
    January,
    February,
    March,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

Day getCurrentDay(Date);
void displayCalender(Date);
int getDayNo(Day);

int main()
{
    Date date;
    cout << "Enter the day: ";
takeDayAgain:
    cin >> date.day;
    if (date.day > 31 || date.day < 1)
    {
        cout << "Please, Enter correct day: ";
        goto takeDayAgain;
    }
    cout << "Enter the month:";
takeMonthAgain:
    cin >> date.month;
    if (date.month > 12 || date.month < 1)
    {
        cout << "Please, Enter correct month: ";
        goto takeMonthAgain;
    }
    cout << "Enter the year:";
takeYearAgain:
    cin >> date.year;
    if (date.year > 2050 || date.year < 1981)
    {
        cout << "Please, Enter correct year between 1981-2050: ";
        goto takeYearAgain;
    }
    displayCalender(date);
    getch();
    return 0;
}

void displayCalender(Date currentDate)
{
    Day day = getCurrentDay(currentDate);

    int dayNo = 1;
    cout << "\033[36;40m";
    cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat\t";

    for (int i = 0; i < getDaysInMonth(currentDate.month, currentDate.year) + getDayNo(day); i++)
    {
        if (i % 7 == 0)
        {
            cout << endl;
        }
        if (i < getDayNo(day))
        {
            cout << "   \t";
        }
        else
        {
            if (dayNo == currentDate.day)
            {
                cout << "\033[31;40m";
                cout << dayNo++ << "\t";
                cout << "\033[36;40m";
            }
            else
            {
                cout << dayNo++ << "\t";
            }
        }
    }
    cout << "\033[0m";
}

int getDayNo(Day day)
{
    if (day == Sunday)
    {
        return 0;
    }
    else if (day == Monday)
    {
        return 1;
    }
    else if (day == Tuesday)
    {
        return 2;
    }
    else if (day == Wednesday)
    {
        return 3;
    }
    else if (day == Thursday)
    {
        return 4;
    }
    else if (day == Friday)
    {
        return 5;
    }
    else if (day == Saturday)
    {
        return 6;
    }
}
Day getCurrentDay(Date currentDate)
{
    // 1/1/1981 --> Thusdays
    long int totalDays = 0;

    for (int year = 1981; year < currentDate.year; year++)
    {
        totalDays += isLeapYear(year) ? 366 : 365;
    }
    for (int month = 1; month < currentDate.month; month++)
    {
        totalDays += getDaysInMonth(month, currentDate.year);
    }

    int dayNo = totalDays % 7; // -6 to set sunday at 0 index

    enum Day day = Sunday;
    switch (dayNo)
    {
    case 0:
        day = Thursday;
        break;
    case 1:
        day = Friday;
        break;
    case 2:
        day = Saturday;
        break;
    case 3:
        day = Sunday;
        break;
    case 4:
        day = Monday;
        break;
    case 5:
        day = Tuesday;
        break;
    case 6:
        day = Wednesday;
        break;
    }

    return day;
}

int getDaysInMonth(int monthNo, int year)
{
    switch (monthNo)
    {
    case 1:
        return 31;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    case 3:
        return 31;
    case 4:
        return 30;
    case 5:
        return 31;
    case 6:
        return 30;
    case 7:
        return 31;
    case 8:
        return 31;
    case 9:
        return 30;
    case 10:
        return 31;
    case 11:
        return 30;
    case 12:
        return 31;
    }
}

bool isLeapYear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
