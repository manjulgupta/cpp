//RECURSION TECHNOLOGY DEMONSTRATION: 
//sorted array checker
#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n){
    if(n==1){
        return true;
    }
    else
        return (arr[0]<=arr[1])&&check(arr+1,n-1);  //*
}

int main() {
    int arr[]={2,3,5,7,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<check(arr,n);
    arr+1;
    cout<<(arr+1)[0];   //*
    return 0;
}
