//REVERSE THE STRING
#include <bits/stdc++.h>
using namespace std;
void rev(string s){
    int n=s.size();
    if(n==0)
        return ;
    cout<<s[n-1];
    rev(s.substr(0,n-1));

}

int main(){
    string s="That's gr8.";
    rev(s);
    return 0;
}

//  cout<<;
//  cout<<<<endl;