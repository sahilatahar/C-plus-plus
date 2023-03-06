/*  Overloading Binary Operator

Binary operators like +, -, *, /, etc. can also be overloaded in C++. Overloading a binary operator allows us to define how it should behave when applied to objects of a user-defined class.

To overload a binary operator, we define a member function of the class called operator followed by the operator symbol. The function takes one argument of the same type as the class and returns a new object of the class.

Here's an example of overloading the + operator for a class called MyClass:
*/

class MyClass
{
public:
    MyClass(int x) : data(x) {}
    MyClass operator+(const MyClass &other)
    {
        return MyClass(data + other.data);
    }

private:
    int data;
};

/*
In this example, the constructor of MyClass takes an integer argument and initializes the data member. The operator+() function takes one argument of type const MyClass& and returns a new MyClass object that is the sum of the data members of the two objects.

With this definition, we can use the + operator on MyClass objects, like this:
*/

MyClass a(10);
MyClass b(20);
MyClass c = a + b; // c.data = 30
