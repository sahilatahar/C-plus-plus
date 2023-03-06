//  Private , Public & Protected based access modifier

/*
Access modifiers are used to specify the level of access to the members of a class. There are three types of access modifiers in C++: private, public, and protected.

Private Access Modifier:

Private members are accessible only within the class.
Private members cannot be accessed directly from outside the class.
Private members can be accessed only through public or protected member functions.
Public Access Modifier:

Public members are accessible from anywhere in the program.
Public members can be accessed directly from outside the class.
Public members can also be accessed through objects of the class.
Protected Access Modifier:

Protected members are accessible within the class and its derived classes.
Protected members cannot be accessed directly from outside the class or its derived classes.
Protected members can be accessed only through public or protected member functions of the class or its derived classes.
Here is an example that demonstrates the use of private, public, and protected access modifiers:
*/

#include <iostream>
using namespace std;

// Base class
class Base
{
private:
    int privateVar;

public:
    int publicVar;

protected:
    int protectedVar;
};

// Derived class
class Derived : public Base
{
public:
    void accessMembers()
    {
        privateVar = 10;   // Compiler Error: privateVar is not accessible here
        publicVar = 20;    // Accessible, as publicVar is public member of base class
        protectedVar = 30; // Accessible, as protectedVar is protected member of base class
    }
};

int main()
{
    Base baseObj;
    Derived derivedObj;

    baseObj.publicVar = 10;    // Accessible, as publicVar is public member of base class
    derivedObj.publicVar = 20; // Accessible, as publicVar is public member of base class

    baseObj.protectedVar = 30;    // Compiler Error: protectedVar is not accessible outside the class
    derivedObj.protectedVar = 40; // Compiler Error: protectedVar is not accessible outside the class

    return 0;
}

/*
In this example, we have a base class Base with a private, public, and protected member variables. We also have a derived class Derived that inherits from Base. In the accessMembers() function of the derived class, we can access the public and protected members of the base class, but not the private member. In the main() function, we can access the public member variables of both Base and Derived objects, but we cannot access the protected member variables of Base outside the class or its derived classes.
*/