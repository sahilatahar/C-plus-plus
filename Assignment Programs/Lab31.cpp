//  Convert data of one type to another

/*
In C++, we can convert data of one type to another using type casting. There are two types of type casting:

Implicit Type Conversion: This type of type casting is automatically done by the compiler when it is safe to do so. For example, converting an int to a float, or a float to a double.

Explicit Type Conversion: This type of type casting is done explicitly in the code by the programmer. There are two ways to do explicit type casting:

a. C-style Type Casting: This type of type casting is done using a cast operator. For example, (float)10 will cast the integer value 10 to a float.

b. C++-style Type Casting: This type of type casting is done using special casting operators provided by C++. There are four types of C++-style type casting:

i. static_cast: This operator is used for general purpose type casting.

ii. dynamic_cast: This operator is used for type casting between polymorphic classes.

iii. const_cast: This operator is used to remove the constness of a variable.

iv. reinterpret_cast: This operator is used to cast one pointer type to another. This type of casting is implementation dependent and should be used with caution.

Let's say you have a variable num1 of type int and you want to convert it to a variable num2 of type double. You can use the following code to achieve this:
*/
int num1 = 10;
double num2 = static_cast<double>(num1); // converts int to double

/*
In this code, static_cast is used to convert the value of num1 from int to double. The converted value is then stored in num2.
*/