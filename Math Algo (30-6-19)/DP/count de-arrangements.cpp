#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d[n+1];
    d[1]=0;
    d[2]=1;
    for(int i=3;i<=n;i++)
        d[i] = (i-1)*(d[i-2] + d[i-1]);
    cout<<d[n];
    return 0;
}
