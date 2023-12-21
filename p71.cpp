//SPIRAL PRINT

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4]= {1,2,3,4,
                    5,6,7,8,
                    9,10,11,12,
                    13,14,15,16};

    cout<<endl;
    int c1=0,c2=2;
    int r1=0,r2=2;
    for(int i=0;i<4/2;i++){
        for(int j=c1;j<6;j++){
            if(arr[i]>arr[j]){
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<", ";
            }
 return 0;
}

//  cout<<<<endl;