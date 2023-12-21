#include <iostream>
using namespace std;
int setBit(int n, int pos){
    return (n|(1<<pos));
}
//WE PUT 0 IF UNSET BIT
int main(){
    cout<<setBit(5,1);
    return 0;
}