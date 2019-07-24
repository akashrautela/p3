#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,s[]={0,2,5,10,25,50};
    int n=17 , m=6;
    int w[n+1][m+1];

    for(i=0;i<=m;i++) w[0][i]=1;
    for(i=1;i<=n;i++) w[i][0]=0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            int k=0;
            if(i>=s[j]) k=w[i - s[j]][j];

            w[i][j] = k+w[i][j-1];
        }
    }
    cout<<w[n][m];
    return 0;
}
