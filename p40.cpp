//Print all the subsequences

#include <iostream>
using namespace std;

void subsq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string l=s.substr(1);
    subsq(l,ans);
    subsq(l,ans+ch);

}

int main(){
    string s="hello";
    subsq(s,"");

    return 0;
}

//  cout<<;
//  cout<<<<endl;