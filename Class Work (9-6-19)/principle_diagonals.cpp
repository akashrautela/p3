#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];
    for(i=0;i<r;i++)
        cout<<a[i][i]<<" ";
    cout<<endl;
    for(i=0;i<r;i++)
        cout<<a[i][r-1-i]<<" ";
    return 0;
}
