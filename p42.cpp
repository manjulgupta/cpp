//ALL PERMUTATIONS OF A STRING

#include <bits/stdc++.h>
using namespace std;

void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    } 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string t=s.substr(0,i)+s.substr(i+1);
        permutation(t,ans+ch);
        
    }
}

int main(){
    string s="abc";
    permutation(s,"");
    return 0;
}

//  cout<<;
//  cout<<<<endl;