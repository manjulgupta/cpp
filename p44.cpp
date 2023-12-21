//LONG INT FACTORIALS

#include <bits/stdc++.h>
using namespace std;

void extraLongFactorials(int n) {
    int ans[162]={0};
    ans[0]=1;
    
    for(int i=2;i<=n;i++){
        for(int j=0;j<160;j++){
            ans[j]=ans[j]*i;
            
        }
        for(int i=0;i<161;i++){
        if(ans[i]>9){
                ans[i+1]+=ans[i]/10;
                ans[i]%=10;
                
            }
        }
    }
    
    
    int k=161;
    for(;k>=0;k--){
        if(ans[k]!=0)
            break;
    }
    for(int i=k;i>=0;i--){
        
        cout<<ans[i];
    }
}


int main(){
    int n=77;
    extraLongFactorials(n);
    return 0;
}

//  cout<<;
//  cout<<<<endl;