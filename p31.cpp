#include <iostream>
using namespace std;

int getBit(int n){
    int c=0;
    for(int i=0;i<8;i++)
        if((n&(1<<i))!=0)
            c++;
    return c;
}

//ALTERNATE APPROACH
int ones(int n){
    int c=0;
    while(n){       //n!=0
        n=n&(n-1);
        c++;
    }
    return c;
}
int main(){
    cout<<ones(5);
    return 0;
}