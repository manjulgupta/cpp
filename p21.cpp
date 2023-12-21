#include<iostream>
using namespace std;
int main(){

    int V[]={5,2,9,2,4,6,3,12,5};
    int r=0;
    for(int i=1;i<9;i++){
        if((V[i]>V[i-1]||i==0)&&(V[i]>V[i+1]||i==8))//err
            r++;
        
    }
    // if(V[0]>V[1])
    //     r++;

    cout<<"Record Breaking: "<<r;
}
