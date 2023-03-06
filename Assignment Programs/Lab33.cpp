//  Inheritance All type

/*
Inheritance is an important feature of object-oriented programming (OOP) that allows a class to inherit properties and methods from another class. There are four types of inheritance in C++:

Single inheritance: A derived class inherits properties and methods from a single base class.
Example:
*/

class Animal
{
public:
    void eat()
    {
        cout << "Eating...";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking...";
    }
};

/*
Multiple inheritance: A derived class inherits properties and methods from two or more base classes.
Example:
*/

class A
{
public:
    void functionA()
    {
        cout << "Function A...";
    }
};

class B
{
public:
    void functionB()
    {
        cout << "Function B...";
    }
};

class C : public A, public B
{
public:
    void functionC()
    {
        cout << "Function C...";
    }
};

/*
Hierarchical inheritance: Multiple derived classes inherit properties and methods from a single base class.
Example:
*/

class Animal
{
public:
    void eat()
    {
        cout << "Eating...";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking...";
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing...";
    }
};

/*
Multilevel inheritance: A derived class is derived from another derived class.
Example:
*/

class Animal
{
public:
    void eat()
    {
        cout << "Eating...";
    }
};

class Mammal : public Animal
{
public:
    void feedYoung()
    {
        cout << "Feeding young...";
    }
};

class Dog : public Mammal
{
public:
    void bark()
    {
        cout << "Barking...";
    }
};

/*
Hybrid inheritance is a combination of multiple inheritance and hierarchical inheritance. It involves a combination of two or more types of inheritance. In hybrid inheritance, a class inherits properties from two or more classes, and these inherited classes themselves inherit from other classes.

For example, let's consider the following inheritance hierarchy:
*/

class A
{
    // class members and functions
};

class B : public A
{
    // class members and functions
};

class C : public A
{
    // class members and functions
};

class D : public B, public C
{
    // class members and functions
};

/*
Here, class D inherits from both B and C, which in turn both inherit from A. This is an example of hybrid inheritance.

In this scenario, class D has access to all the properties of class A, as well as the properties of classes B and C, making it a powerful and flexible inheritance structure.
*/