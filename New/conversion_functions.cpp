#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string reverse(string);
string decimalToBinary(int);

string decimalToBinary(int decimalNo)
{
    string binaryNo = "";
    while (true)
    {
        if (decimalNo == 0 || decimalNo == 1)
        {
            break;
        }
        binaryNo += to_string(decimalNo % 2);
        decimalNo = decimalNo / 2;
    }
    binaryNo += to_string(decimalNo);
    return reverse(binaryNo);
}

string octalToBinary(int octalNo)
{
    return decimalToBinary(octalToDecimal(octalNo));
}

int octalToDecimal(int octalNo)
{
    int power = 0, decimalNo = 0;

    while (true)
    {
        if (octalNo == 0 || octalNo == 1)
        {
            break;
        }
        decimalNo += (octalNo % 10) * pow(8, power);
        power++;
        octalNo = octalNo / 8;
    }
    cout << decimalNo;
    return decimalNo;
}

string reverse(string str)
{
    char c;
    for (int i = 0; i < str.length() / 2; i++)
    {
        c = str[i];
        str[i] = str[str.length() - 1 - i];
        str[str.length() - 1 - i] = c;
    }
    return str;
}