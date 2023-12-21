#include <iostream>
using namespace std;
bool two(int n){
    return (n&& !(n&n-1));//n&& bcoz if n=0
}
int main(){
    cout<<two(16);
    return 0;
}