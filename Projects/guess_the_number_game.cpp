#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
    //Generating Random Number
    int randomNo, userInput = 0, attempts = 0;
    srand(time(0));
    randomNo = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100:";
    cin >> userInput;
    attempts++;
    while (randomNo != userInput)
    {
        if (userInput > randomNo)
        {
            cout << "Enter some smaller number: ";
        }
        else if (userInput < randomNo)
        {
            cout << "Enter some greater number: ";
        }
        cin >> userInput;
        attempts++;
    }
    cout << "Correct Guess, You guess the number in " << attempts << " attempts";
    getch();
    return 0;
}