#include <iostream>
using namespace std;

int toB(int n){
    //int b=1;
    int c=0;
    while(n>0){
        n=n/2;
        c++;
    }
    return --c;

}
int p(int x,int n){
    int a=1;
    for(int i=1;i<=n;i++)
        a=a*x;
    return a;
}
int main(){
    cout<<"ENTER A NO.:";
    int a;
    cin>>a;
    int n=a;
    int b=0;
    while(n>0){
        b=b+p(10,toB(n));
        n=n-p(2,toB(n));
    }

    cout<<"ans "<<b;
    return 0;
}