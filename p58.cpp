//HYBRID CALCULATOR

#include<bits/stdc++.h>
using namespace std;

class SimpleCalc{
    int a,b;
    char c;
    public:
    int res;
    void mulitiply(int,int);
    void divide(int,int);
    void add(int,int);
    void sub(int,int);

    SimpleCalc(int x,int y,char z){
        a=x; b=y; c=z;
        switch (c)
        {
        case '+': add(a,b);
            break;
        case '-': sub(a,b);
            break;
        case '*': mulitiply(a,b);
            break;
        case '/': divide(a,b);
            break;
        default:
            break;
        }
        cout<<res;
    }
    
};
void SimpleCalc::add(int a,int b){
    res=a+b;

}
void SimpleCalc::sub(int a,int b){
    res=a-b;

}
void SimpleCalc::mulitiply(int a,int b){
    res=a*b;

}
void SimpleCalc::divide(int a,int b){
    res=a/b;

}

class ScientificCalc{
    int a,b;
    char c;
    public:
    int res;
    void exp(int x,int p){
        res=1;
        while(p>0){
            res*=x;
            p--;
        }
    }
    ScientificCalc(int a, int b){
        exp(a,b);
        cout<<res;
    }    

};

class HybridCalc:public SimpleCalc, public ScientificCalc{
    

};

int main()
{

 return 0;
}

//  cout<<<<endl;