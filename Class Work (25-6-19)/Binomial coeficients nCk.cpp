//  DYANAMIC SOLUTION

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5 ,k=2 ;
    int i,j,c[n+1][k+1];
    for(i=0;i<=n;i++) c[i][0] = 1;
    for(i=1;i<=k;i++)
    {
        c[0][i] = 0;
        c[i][i] = 1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
            c[i][j] = c[i-1][j-1] + c[i-1][j];
    }

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)   cout<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
