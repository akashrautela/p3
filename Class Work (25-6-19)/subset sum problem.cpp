#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[] = {0,4,7,15,25,42};
    int sum = 51 , n = 6;
    int i,j;
    int subset[sum+1][n+1] = {0};
    for(i=0;i<=sum;i++) subset[i][0] = 0;
    for(i=0;i<=n;i++) subset[0][i] = 0;

    for(i=1;i<=sum;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i-s[j] >=0)
                subset[i][j] = subset[i-s[j]][j-1] + subset[i][j-1] ;
        }
    }
    cout<<subset[sum][n];
    return 0;
}
