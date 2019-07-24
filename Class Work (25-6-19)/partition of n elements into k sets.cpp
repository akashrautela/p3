#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,k=3;
    int p[n+1][k+1];
    int i,j;

    for(i=0;i<=n;i++) p[i][0]=0;
    for(i=0;i<=k;i++) p[0][i]=0;
    //for(i=1;i<=k;i++) p[i][i]=1;
    p[1][1] = 1;
    for(i=2;i<=n;i++)
        for(j=1;j<=k;j++)
            p[i][j] = p[i-1][j-1] + j*p[i-1][j];

    cout<<p[n][k];
    return 0;
}
