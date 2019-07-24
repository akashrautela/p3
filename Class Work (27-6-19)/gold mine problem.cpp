#include<bits/stdc++.h>
using namespace std;
int max3(int a, int b, int c)
{
    a = max(a,b);
    a = max(a,c);
    return a;
}
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int mine[m][n];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) cin>>mine[i][j];

    int row, col;
    for(col = n-2 ; col>=0 ; col--)
    {
        for(row=0; row<m; row++)
        {
            int right_down = row<=m-2 ? mine[row+1][col+1]:0;
            int right_up = row>=1 ? mine[row-1][col+1] : 0;
            int right = mine[row][col+1];
            mine[row][col] += max3(right_down, right_up, right);
        }
    }
    int max  = -9999;
    for(row=0;row<m;row++)
        if(max < mine[row][0]) max = mine[row][0];
    cout<<max;
    return 0;
}
