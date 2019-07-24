#include<bits/stdc++.h>
using namespace std;
long long m = 10e8 + 7;
int main()
{
    long long a, b, prod=0;
    cin>>a>>b;
    a = a % m;
    b = b % m;

    while(b!=0)
    {
        if(b&1)
            prod = (prod+a)%m;
        a = (2*a)%m;
        b=b>>1;
    }
    cout<<prod;
    return 0;
}
