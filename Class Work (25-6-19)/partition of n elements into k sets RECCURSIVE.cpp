#include<bits/stdc++.h>
using namespace std;
int f(int n ,int k)
{
    if(n == 0) return 0;
    if(k == 0) return 0;
    if(n == k) return 1;
    return f(n-1,k-1) + k*f(n-1,k);
}
int main()
{
    int n = 4, k= 2;
    cout<<f(n,k);
    return 0;
}
