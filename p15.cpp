// ::::DECIMAL2HEXA::::::: : 
#include <iostream>
using namespace std;

int toD(string a){
    
    int c=1;
    int ans=0;
    int s=a.size();
    for(int i=s-1;i>=0;i--){
        if(a[i]>='0'&&a[i]<='9'){
            ans=ans+c*(a[i]-'0');    //NEW TECHNOLOGY
        }
        else if(a[i]>='A'&&a[i]<='F'){
            ans=ans+c*(a[i]-'A'+10);   // char BEING LOWER LEVEL IS TYPECASTED AUTOMATICALLY TO ITS ASCII VALUE
                                    //mind the intricacies
        }
        c*=16;
    }
    return ans;
}
int main(){
    cout<<"ENTER A HEXA NO.:";
    string a;
    cin>>a;
    cout<<toD(a);
    return 0;
    
    }
