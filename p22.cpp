//Given an unsorted array A of size N of non-negative integers,
//find a continuous subarray which adds to a given number S.
#include<iostream>
using namespace std;
int main(){

    int A[]={5,2,9,2,4,6,3,12,5};
    int s=12;
    int sum=0;
    int i=0;
    int j=0;
    for(;sum<=s && i<9;i++){
        sum+=A[i];
        j=i;
    }
    
        cout<<"first "<<sum<<endl;
    
    i=0;
    do{
        if(i!=0)
        sum=sum+A[j];
        for(;i<9 && sum>=s;i++){
            if(sum==s){
                cout<<i<<" & "<<j;
                return 0;   //New Technology
            }
            sum=sum-A[i];
        }
 
        
        j++;
    }while(j<8 && sum<=s);

    return 0;
}
