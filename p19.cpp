//sum of Subarrays
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[]={1,2,0,7,2};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                sum+=arr[i];
            }
        }
    }
    cout<<sum;
}