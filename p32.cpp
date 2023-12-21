//IMP
#include <iostream>
using namespace std;
void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){  // brackets4 clarity
        cout<<"{ ";
        for(int j=0;j<n;j++){
            if((1<<j)&i){
                cout<<arr[j]<<" ";
            }
        }
        cout<<"}"<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    subsets(arr,5);
    return 0;
}