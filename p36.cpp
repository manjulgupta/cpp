//PRIME factorisation VIA SIEVE OF ERATOSTHENES
// logik *
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a[n+1]={0}; //ALL ELEMENTS MARKED 0.

    for(int i=2;i<n+1;i++){
        if(a[i]==0){
            for(int j=i*i;j<n+1;j+=i){
                a[j]=i;
            }
        }
    }
    while(n!=0){
        if(a[n]==0){
            cout<<n;
            break;
    }
        else{
        cout<<a[n]<<endl;
        n=n/a[n];
        }        
    }
    return 0;
}