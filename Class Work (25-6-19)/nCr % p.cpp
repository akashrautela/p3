#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n=5, k=2 ;
    long long c[n+1][k+1];
    long int p = 10e8+1;

    for(i=0;i<=k;i++)
    {
        c[i][i]=1;
        c[0][i]=0;
    }
    for(i=0;i<=n;i++) c[i][0] = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
            c[i][j] = (c[i-1][j-1]%p + c[i-1][j]%p)%p;
    }
    cout<<c[n][k];
    return 0;
}
