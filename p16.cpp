//SELECTION SORT
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={6,2,4,1,3,5};
    
    for(int i=0;i<6-1;i++){          //n-1    MIND THE
        int m=i;
        for(int j=i+1;j<6;j++){     //i+1     INTRICACIES
            if(arr[m]>=arr[j]){
                m=j;
            }
        }
        int a=arr[m];
        arr[m]=arr[i];
        arr[i]=a;
    }
    for(int i=0;i<6;i++)
        cout<<arr[i];
}