/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
    void gen(vector<int> nums,vector<vector<int>>& f,int i,int n){
        if(i>=nums.size()){
            f.push_back(nums);
            return;
        }
        
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            gen(nums,f,i+1,n);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> f;
        vector<int> ans;
        int n=nums.size();

        gen(nums,f,0,n);
        return f;
        
    }
};
int main()
{
 return 0;
}

//  cout<<<<endl;