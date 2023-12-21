/*
KEYPAD PROBLEM

Given a string containing digits from 2-9 inclusive, 
return all possible letter combinations that the number 
could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) 
is given below. Note that 1 does not map to any letters.


 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
    void combo(vector<string>& ans, string s, int i, string tAns){
        if(s.size()<=i){
            ans.push_back(tAns);
            return;
        }
        string m[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int a=s[i]-'0';
        string now=m[a-2];
        for(int j=0;j<now.size();j++){
            tAns.push_back(now[j]);
            combo(ans,s,i+1,tAns);
            tAns.pop_back();
        }


    }
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        if(digits.size()==0){
            return ans;
        }
        combo(ans,digits,0,"");
        return ans;
    }
};
int main()
{
 return 0;
}

//  cout<<<<endl;