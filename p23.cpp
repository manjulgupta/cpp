//PRINT ALL SUB ARRAYS

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={-1,4,7,2};
    int n=4;
    
    int ans=0;

    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s=s+arr[j];
            ans=max(ans,s);
        }
        
    }
    cout<<ans;
    return 0;
}