//OOPs based int swapper via bit mnipulation
// friend function use demonstration

#include<bits/stdc++.h>
using namespace std;

class c2;
// declared I, otherwise won't be recognised

class c1
{
    friend void xchange(c1,c2);
private:
    int n1;
    void showD(){
        cout<<"It's "<<n1<<endl;
    }
public:
    void setD(int n){
        n1=n;
    }
    void its(){
        showD();
    }
    
};
class c2
{
private:
    int n1;
    void showD(){
        cout<<"It's "<<n1<<endl;
    }
public:
    void setD(int n){
        n1=n;
    }
    void its(){
        showD();
    }
    friend void xchange(c1,c2);
    
};

void xchange(c1 ob1,c2 ob2){
    int* a=&(ob1.n1);
    int* b=&(ob2.n1);
    int c=*a;
    *a=*b;
    *b=c;
    return;
}

int main()
{
    c1 obj1;
    c2 obj2;
    obj1.setD(8);
    obj2.setD(5);
    xchange(obj1,obj2);
    obj1.its();
    obj2.its();
    return 0;
}

//  cout<<<<endl;