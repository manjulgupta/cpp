// *        *
// **      **
// * *    * *
// *  *  *  *
// *   **   *
// *   **   *
// *  *  *  *
// * *    * *
// **      **
// *        *
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the no. of Rowss: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++)
            j==1||j==2*n||i==j||(2*n+1-j)==i?cout<<"*":cout<<" ";
        cout<<"\n";
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*n;j++)
            j==1||j==2*n||i==j||(2*n+1-j)==i?cout<<"*":cout<<" ";
        cout<<"\n";
    }

}