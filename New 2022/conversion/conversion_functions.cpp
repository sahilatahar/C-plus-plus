#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string reverse(string);
string decimalToBinary(int decimalNo);
string octalToBinary(int octalNo);
string hexaDecimalToBinary(int hexaDecimalNo);
int hexaDecimalToDecimal(int hexaDecimalNo);
int binaryToDecimal(string binaryNo);
int octalToDecimal(int octalNo);
int binaryToOctal(string binary);

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

string hexaDecimalToBinary(int hexaDecimalNo)
{
    return decimalToBinary(hexaDecimalToDecimal(hexaDecimalNo));
}

int hexaDecimalToDecimal(int hexaDecimalNo)
{
    int power = 0, decimalNo = 0;

    while (true)
    {
        if (hexaDecimalNo == 0 || hexaDecimalNo == 1)
        {
            break;
        }
        decimalNo += (hexaDecimalNo % 10) * pow(16, power);
        power++;
        hexaDecimalNo = hexaDecimalNo / 10;
    }
    return decimalNo;
}

int binaryToDecimal(string binaryNo)
{
    int power = 0, decimalNo = 0;

    while (true)
    {
        if (binaryNo.length() == 0)
        {
            break;
        }
        decimalNo += (stoi(binaryNo.substr(binaryNo.size() - 1)) % 10) * pow(2, power);
        power++;
        binaryNo = binaryNo.substr(0, binaryNo.size() - 1);
    }
    return decimalNo;
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
        octalNo = octalNo / 10;
    }
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