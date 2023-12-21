//PRINTING IN SPIRAL ORDER 2D MATRIX
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};//*or use{} or use line gap.
    int m=3; int n=3;
    //m x n matrix
    
    int r1=0,r2=m-1,c1=0,c2=n-1;
    while(r1<=r2 && c1<=c2){

        for(int i=c1;i<=c2;i++)
            cout<<arr[r1][i]<<" ";
        r1++; 
        for(int i=r1;i<=r2;i++)
            cout<<arr[i][c2]<<" ";
        c2--;
        for(int i=c2;i>=c1;i--)
            cout<<arr[r2][i]<<" ";
        r2--;
        for(int i=r2;i>=r1;i--)
            cout<<arr[i][c1]<<" ";
        c1++;
    }
    return 0;
}