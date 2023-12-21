// BINARY SEARCH VIA RECURSION

#include <bits/stdc++.h>
#define m(s, e) (s + e) / 2
using namespace std;

bool binS(int *arr, int s, int e, int n)
{
    if (arr[m(s, e)] == n)
    {
        return 1;
    }
    if (s == e)
    {
        return 0;
    }
    if (arr[m(s, e)] > n)
    {
        return binS(arr, s, m(s, e)-1, n);  //  +/-1 *
    }
    else
    {
        return binS(arr, m(s, e)+1, e, n);  //  +/-1 *
    }
}

int main()
{
    int arr[] = {1, 4, 6, 7, 9};
    cout << binS(arr, 0, 4, 9);

    return 0;
}

//  cout<<<<endl;