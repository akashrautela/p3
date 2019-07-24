#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int i,j;
    int gcdrow[n], gcdcol[m];

    for(i=0;i<n;i++)
        for(j=0;j<m;j++) cin>>a[i][j];


    for(i=0;i<n;i++)
    {
        gcdrow[i] = gcd(a[i][0], a[i][1]);
        for(j=2;j<m;j++)
            gcdrow[i] = gcd(gcdrow[i], a[i][j]);
    }

    for(j=0;j<m;j++)
    {
        gcdcol[j] = gcd(a[0][j], a[1][j]);
        for(i=2;i<n;i++)
            gcdcol[j] = gcd(gcdcol[j], a[j][i]);
    }

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            a[i][j] = max(gcdrow[i], gcdcol[j]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
