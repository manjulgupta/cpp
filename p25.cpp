// MULTIPLYING A MATRIX
#include<iostream>
using namespace std;


int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9}; // FIND SHOTCUTS!!
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int m=3; int n=3; int o=3;
    int ans[m][o];
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            ans[i][j]=0;  // INITIALISATION IS NECESSARY
            for(int k=0;k<n;k++)
                ans[i][j]+=a[i][k]*b[k][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}