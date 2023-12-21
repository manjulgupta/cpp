//Move all ‘x’ to the end of the string
#include <bits/stdc++.h>
using namespace std;
string move(string s){
    if(s==""){
        return "";
    }
    else if(s[0]=='a'){
        return (move(s.substr(1))+"a");
    }
    else{
        return (s.substr(0,1)+move(s.substr(1)));
    }

}

int main(){
    string s="That's really great.";
    cout<<move(s);
    return 0;
}

//  cout<<;
//  cout<<<<endl;