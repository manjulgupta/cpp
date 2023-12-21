//INSERTION SORT
#include<iostream>
using namespace std;
int main(){
    int arr[]={6,2,4,1,3,5};

    for(int i=1;i<6;i++){
        int m=arr[i];
        int j=i-1;  
        while(j>=0&&arr[j]>m){
                arr[j+1]=arr[j];
                arr[j]=m;
                j--;
        }   
    }

    for(int i=0;i<6;i++)
        cout<<arr[i];
}                                                       