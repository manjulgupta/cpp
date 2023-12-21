//:<:MERGE SORT:>:
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& a,int s,int e, int m){
    int p=s;
    int q=m+1;
    vector <int> n;
    while(p<=m && q<=e){
        if(a[p]>a[q]){
            n.push_back(a[q]);
            q++;
        }
        else{
            n.push_back(a[p]);
            p++;
        }
    }
    
        while(p<=m){
            n.push_back(a[p]);
            p++;
        }
    
        while(q<=e){
            n.push_back(a[q]);
            q++;
        }
    // for(int i=s;i<=e;i++){
    //     cout<<n[i-s]<<" ";
    // }
    // cout<<endl;
    for(int i=s;i<=e;i++){
        a[i]=n[i-s];
    }
}

void sortM(vector<int>& arr, int s, int e){
    if(s>=e){
        return;
    }
    int m=(s+e)/2;
    sortM(arr, s,m);
    sortM(arr,m+1,e);
    merge(arr,s,e,m);

}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    sortM(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    vector <int> arr={2,5,3,1,9,12};
    mergeSort(arr,6);
    return 0;
}
*/