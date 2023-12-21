// //Knapsack [IMP]
// Given n items, each item has a certain value and weight. We have to maximize the
// value of the objects we can accommodate in a bag of weight W.
// Idea: For each item, we have two choices, either to include it or exclude it.

#include <bits/stdc++.h>
using namespace std;

int knapsack(int value[],int wt[],int n,int w){
    if(w==0 || n<=0)
        return;
    
    if(wt[n-1]>w)
        return knapsack(value,wt,n-1,w);
// LOGIK
    return max(knapsack(value,wt,n-1,w),knapsack(value,wt,n-1,w-wt[n-1])+value[n-1]);


}

int main(){

    return 0;
}

//  cout<<;
//  cout<<<<endl;