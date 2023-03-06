//  Unary minus operator it overloaded

/*
The unary minus operator (-) can be overloaded in C++ for a user-defined class.

To overload the unary minus operator for a class, we define a member function called operator-() that takes no arguments. This function should return an object of the class with the negative of its original value.

Here's an example of overloading the unary minus operator for a class called MyClass:
*/

class MyClass
{
public:
    MyClass(int x) : data(x) {}
    MyClass operator-()
    {
        return MyClass(-data);
    }

private:
    int data;
};
