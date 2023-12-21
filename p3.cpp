//Program to find maximum, minimum among two numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int t=c;
    if(a<b)
        if(b>c)
            t=b;
        
        else
            t=c;
        
    
    else if(a>c)
        t=a;
    
    cout<<t;
    return 0;
}