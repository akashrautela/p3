#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int tmp = gcd(i,j);
            if(tmp == j)
                cout<<"("<<i<<","<<j<<")"<<"  ";
        }
    }
    return 0;
}
