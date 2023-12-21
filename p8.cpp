//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter no. of Rows: ";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            (i+j)==(n+1)||(n-i+j)==(2*n-1)?cout<<"*":cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*n-1;j++){
            (i+j)==(n+1)||(n-i+j)==(2*n-1)?cout<<"*":cout<<" ";
        }
        cout<<"\n";
    }
}