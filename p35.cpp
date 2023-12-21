//PRIME NO VIA SIEVE OF ERATOSTHENES
#include<iostream>
using namespace std;
int main(){
    int n=100;
    int a[n+1]={0}; //ALL ELEMENTS MARKED 0.

    for(int i=2;i<n+1;i++){
        if(a[i]==0){
            for(int j=i*i;j<n+1;j+=i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
        if(a[i]==0)
        cout<<i<<endl;
    return 0;
}