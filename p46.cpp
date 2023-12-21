//

#include <bits/stdc++.h>
using namespace std;

//this is an adt:
typedef union myArray
{
    int tS;
    int uS;
    float n;
}ep;
//end


int main(){
    ep marks;
    marks.tS=60;
    marks.n=94.3;
    cout<<marks.tS<<endl;
    cout<<marks.n;

    return 0;
}

//  cout<<;
//  cout<<<<endl;