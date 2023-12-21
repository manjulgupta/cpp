#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,0,-2,-4,-6,3,12,5};

    int c=1;
    int c1=1;
    int d=999999;
    int ans=0;
    for(int i=0;i<9-1;i++){
        if(arr[i]-arr[i+1]==d){
            c++;
        }
        else{
            c1++;
            ans=max(c,c1);
            d=arr[i]-arr[i+1];
        }
        
        }
    if(ans>1){
    cout<<ans;
    }
    else
    cout<<"NOT FOUND";
}