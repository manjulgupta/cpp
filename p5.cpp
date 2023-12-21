// *****
// *   *
// *   *
// *****
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter no. of Rows and Columns: ";
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
                (i==1||i==a||j==1||j==b)?cout<<"*":cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}