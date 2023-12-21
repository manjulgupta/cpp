// ZIG ZAG PATTERN
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a no.: ";
    cin>>x;
    //ALTERNATE LOGIK::
//     for(i=1;i<=3;i++){
// for(j=1;j<=n;j++){
// if(((i+j)%4==0)||((i==2)&&(j%4==0)))
// cout<<"* ";
// else
// cout<<" ";
// `
// cout<<endl;
// `
    
        for(int a=1;a<=(x/4+(x%4)/3);a++)
            cout<<"  * ";
        cout<<"\n";
        for(int a=1;a<=(x/2+(x%4)/2);a++)
            cout<<" *";
        cout<<"\n";
        for(int a=1;a<=(x/4+(x%4));a++)
            cout<<"*   ";
    }
