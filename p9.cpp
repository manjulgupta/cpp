// ***********
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
// ***********

#include <iostream>
using namespace std;
int main(){
    cout<<"Enter no. of rows: ";
    // WHAT IF N++??????????
    int n;
    cin>>n;
    n++;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            (i<=(n-j+1)||i<=(j-n+1)||j<=(i-n+1)||i+j>=3*n-1)?cout<<"*":cout<<" ";
        }
        cout<<"\n";
    }
    return 0;

}