// 1
// 23
// 456
// 78910
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter no. of Rows: ";
    int n;
    cin>>n;
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c++<<" ";
        }
        cout<<"\n";
    }
}