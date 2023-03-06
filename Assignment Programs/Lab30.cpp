//  Write how to overload the input and output operators << and  >>.

/*
In C++, the input and output stream operators << and >> can be overloaded to customize the input and output of user-defined objects. Here's how to overload them:

Overloading the output operator <<
To overload the output operator << for a custom object, we need to define a friend function inside the class definition that takes two arguments: an output stream object and a reference to the custom object to be printed. The function should return the output stream object by reference.

Here's an example:
*/

#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    MyClass(int d) : data(d) {}
    friend ostream &operator<<(ostream &os, const MyClass &obj)
    {
        os << obj.data;
        return os;
    }
};

int main()
{
    MyClass obj(42);
    cout << obj << endl; // outputs: 42
    return 0;
}

/*
In this example, we define the MyClass class with a private data member data. We overload the << operator by defining a friend function operator<< inside the class definition. This function takes an output stream object os and a const reference to a MyClass object obj. Inside the function, we print the data member of the obj object to the output stream object os and return os by reference.

In the main function, we create a MyClass object obj with value 42. We then use the overloaded << operator to print the obj object to the standard output stream cout.

Overloading the input operator >>
To overload the input operator >> for a custom object, we also need to define a friend function inside the class definition that takes two arguments: an input stream object and a reference to the custom object to be read. The function should return the input stream object by reference.

Here's an example:
*/

#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    MyClass() : data(0) {}
    friend istream &operator>>(istream &is, MyClass &obj)
    {
        is >> obj.data;
        return is;
    }
    void print() const
    {
        cout << data;
    }
};

int main()
{
    MyClass obj;
    cout << "Enter an integer: ";
    cin >> obj; // input a value for obj using the overloaded >> operator
    cout << "You entered: ";
    obj.print(); // output the value of obj using the print() method
    cout << endl;
    return 0;
}

/*
In this example, we define the MyClass class with a private data member data. We overload the >> operator by defining a friend function operator>> inside the class definition. This function takes an input stream object is and a reference to a MyClass object obj. Inside the function, we read an integer value from the input stream object is and store it in the data member of the obj object. We then return is by reference.

In the main function, we create a MyClass object obj with default value 0. We then use the overloaded >> operator to read an integer value from the standard input stream cin into the obj object. Finally, we use the print() method to output the value of the obj object.
*/