#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=4 , k=2 ;
    int p[n+1][k+1];
    p[0][0] = 1;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            if(i<j)
                p[i][j]=0;
        }
    }
    for(i=1;i<=k;i++) p[0][i] = 0;
    for(i=0;i<=n;i++) p[i][0] = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
            p[i][j]=p[i-1][j] + j*p[i-1][j-1];
    }
    cout<<p[n][k];
    return 0;
}
