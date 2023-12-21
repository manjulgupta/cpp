/*
VERY IMPORTANT

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba")
*/

//choti wali string k size ki window bana k traverse kiya hai
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool check(int a1[],int a2[]){
        for(int i=0;i<26;i++){
            if(a1[i]!=a2[i])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        if (m>n)
            return 0;

        int c1[26]={0};
        int c2[26]={0};

        for(int i=0;i<m;i++){
            c1[s1[i]-'a']++;
        }
    //BLOCK CREATE KR DIYA
        for(int i=0;i<m;i++){
            c2[s2[i]-'a']++;
        }

        if(check(c1,c2)){
            return 0;
        }
    //BLOCK KO TRAVERSE KARAYA
        for(int i=m;i<n;i++){
            c2[s2[i]-'a']++;
            c2[s2[i-m]-'a']--;
            if(check(c1,c2)){
                return 1;
            }
        }

        return 0;
    }
};
int main(){
    return 0;

}