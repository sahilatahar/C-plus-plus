//  Destructors

/*
A destructor is a special member function in C++ that is called automatically when an object goes out of scope or is explicitly deleted. The destructor is responsible for freeing up any resources that were allocated by the object during its lifetime.

The destructor is named with the tilde (~) symbol followed by the class name. It has no arguments and no return type. Here's an example:
*/

class MyClass
{
public:
    MyClass()
    { /* constructor code */
    }
    ~MyClass()
    { /* destructor code */
    }
};
