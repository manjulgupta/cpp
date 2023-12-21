//BUBBLE SORT
#include<iostream>
using namespace std;
int main(){
    int arr[]={6,2,4,1,3,5};

    for(int i=0;i<6-1;i++){
        for(int j=0;j<6-i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }

    for(int i=0;i<6;i++)
        cout<<arr[i];
}                                                       