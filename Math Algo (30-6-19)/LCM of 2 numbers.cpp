#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(a == 0) return b;
    return GCD(b%a, a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd = GCD(a,b);
    cout<<a*b/gcd;
    return 0;
}
