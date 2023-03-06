//  Define a class string use overloaded == operator to compare two strings

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *str;

public:
    String(const char *s = "")
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String &s)
    {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    ~String()
    {
        delete[] str;
    }

    bool operator==(const String &s)
    {
        return (strcmp(str, s.str) == 0);
    }
};

int main()
{
    String s1("Hello");
    String s2("World");
    String s3("Hello");

    if (s1 == s2)
    {
        cout << "s1 and s2 are equal." << endl;
    }
    else
    {
        cout << "s1 and s2 are not equal." << endl;
    }

    if (s1 == s3)
    {
        cout << "s1 and s3 are equal." << endl;
    }
    else
    {
        cout << "s1 and s3 are not equal." << endl;
    }

    return 0;
}

/*
In this program, we define a String class that represents a string of characters. We overload the == operator to compare two String objects. The strcmp function is used to compare the strings, and the result is returned as a boolean value. In main(), we create three String objects and use the == operator to compare them. The output of the program is:


Output:
s1 and s2 are not equal.
s1 and s3 are equal.

*/