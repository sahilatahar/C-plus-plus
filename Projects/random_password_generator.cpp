// Random Password Generator

#include <iostream>
#include <conio.h>

using namespace std;

char getRandomCapitalAlphabet();
char getRandomSmallAlphabet();
char getRandomNumber();
char getRandomSpecialCharacter();

int main()
{
    int passLength;
    int randomNo;

    cout << "Enter the password length: ";
    cin >> passLength;

    char password[passLength];

    for (int i = 0; i < passLength; i++)
    {
        randomNo = 1 + rand() % 4;
        switch (randomNo)
        {
        case 1:
            password[i] = getRandomCapitalAlphabet();
            break;
        case 2:
            password[i] = getRandomSmallAlphabet();
            break;
        case 3:
            password[i] = getRandomSpecialCharacter();
            break;
        case 4:
            password[i] = getRandomNumber();
            break;
        }
    }

    cout << "Random Generated Password is : ";
    for (int i = 0; i < passLength; i++)
    {
        cout << password[i];
    }

    getch();
    return 0;
}

char getRandomNumber()
{
    char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int randomNo = rand() % 10;
    return numbers[randomNo];
}

char getRandomSmallAlphabet()
{
    char smallAplabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int randomNo = rand() % 25;
    return smallAplabets[randomNo];
}

char getRandomCapitalAlphabet()
{
    char capitalAlphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int randomNo = rand() % 25;
    return capitalAlphabet[randomNo];
}

char getRandomSpecialCharacter()
{
    char specialCharacters[5] = {'@', '#', '$', '%', '&'};
    int randomNo = rand() % 4;
    return specialCharacters[randomNo];
}