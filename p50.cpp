/*
Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
// Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration
// THIS ONE IS NECESSARY. OTHERWISE ERROR ON DECLARING AN OBJECT


    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) //-> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
     cout<<"Hello world"<<endl;
    //  HELLO WORLD PRINTED 4 TIMES SINCE 4 OBJECTS ARE CREATED
}
int main()
{
    Complex c1, c2, c3,c4;
    c1.printNumber();
    c2.printNumber();
    return 0;
}