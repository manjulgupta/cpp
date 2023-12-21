/*
Create a base class called `Shape` with pure virtual functions `getArea()`
 and `getPerimeter()`. Derive three classes `Rectangle`, `Circle`, and
`Triangle` from the base class `Shape`. Implement the pure virtual functions
in each derived class to calculate and return the area and perimeter of
the respective shape. Create an array of shape pointers and demonstrate
polymorphism by calculating and displaying the area and perimeter of
different shapes.
*/

//

#include<bits/stdc++.h>
using namespace std;

class Shape{
    
    public:
    void getArea();
    int l,b,h;
    Shape(){
    }
    Shape(int x,int y=3.14,int z=1){
        l=x;
        b=y;
        h=z;
    }
};

void Shape::getArea(){
    cout<<"The area is= "<<(l*b*h);
}


class Rectangle: public Shape{
    public:
    Rectangle(){

    }
    Rectangle(int l1,int b1,int h1){
        Shape(l1,b1,h1);
        getArea();
    }
    
};

int main()
{
    Rectangle r1=Rectangle(1,2,3);
 return 0;
}

//  cout<<<<endl;