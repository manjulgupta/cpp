#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a Sentence: ";
    char a[101];
    //cin.ignore(); if any other input before
    cin.getline(a,100);         //*** ONLY FIRST 100(N) CHARACTERS WILL BE TAKEN
    cin.ignore();

    int c=0,m=0,t=0,tM=0;
    for(int i=0;;i++){
        
        if(a[i]==' '||a[i]=='\0'){
            if(c>m){
                m=c;
                tM=t+1;
            }
            c=0;
            t=i;
        }
        else
            c++;
        if(a[i]=='\0')
            break;
        
    }
    cout<<endl<<m<<endl;
    for(int i=0;i<m;i++){
        cout<<a[i+tM];
    }
    return 0;
}