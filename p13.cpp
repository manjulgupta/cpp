#include <iostream>
#include <cstdio>
using namespace std;
// NICE LOGIC TO CONVERT TO DECIMAL
int toD(int n)
{
    int c = 0;
    int d = 1;
    while (n > 0)
    {
        int a = n % 10;
        n = n / 10;
        c += a * d;
        d *= 2;
    }
    return c;
}
int toH(int n)
{
    int c = 0;
    int b = 1;
    while (n > 0)
    {
        int d = n % 10;
        c += d * b;
        b = b * 8;
        n = n / 10;
    }
    return c;
}
int main()
{
    int a;

    printf("Enter 3 no.: ");
    cin >> a;

    cout << toD(a) << " -bin\nhex- " << toH(a);

    return 0;
}
