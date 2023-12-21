/*
Create a class called `Rectangle` that has private member variables `length`
 and `width`. Write a default constructor that initializes both variables to
 0. Also, write a parameterized constructor that allows the user to set the
 length and width of the rectangle. Finally, write a member function called
`calculateArea()` that calculates and returns the area of the rectangle.
*/

//

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    int length, width;

    friend void calculateArea(Rectangle);
    public:
    Rectangle(){
        length=0;
        width=0;
    }
    Rectangle(int a,int b){
        length=a;
        width=b;
    }

};

void calculateArea(Rectangle ob){
    cout<<"Area = "<<ob.length*ob.width<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter length and breadth: "<<endl;
    cin>>a>>b;
    Rectangle r1;

    // SAY'S NO SUITABLE CONSTRUCTOR!!
    Rectangle r2();
    Rectangle r3(a,b);
    calculateArea(r1);
    //calculateArea(r2);
    calculateArea(r3);

    
 return 0;
}

//  cout<<<<endl;