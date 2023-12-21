//print prime nos.
//LOOK AT ALT. APPROACH
/*

for (int num=a; num<=b; num++) {
int i;
for (i=2; i<num; i++) {
if (num%i==0) { //it is not prime
break;
}
}
if (i==num) { //loop has completed all iterations
cout<<num<<endl;
}
}
return*/
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    for(int n=a;n<=b;n++){

    
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                c++;
            }
        }
        if(c==2){
            cout<<"PRIME "<<n;
        }
        else
        cout<<"not prime "<<n;
}
}