//      *
//     **
//    ***
//   ****
//  *****
// ******
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no. of Rows: ";
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            n-i-j<0?cout<<"*":cout<<" ";  //REDUCED {{(([]))}}
        }
        cout<<endl;
    }
    return 0;
}