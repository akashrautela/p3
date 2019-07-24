#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) cin>>a[i][j];
    int k;
    cin>>k;
    int start_row = k<r ?k:r-1;
    int start_col = k<c ?0:k-r+1;

    for(;start_row<r && start_col<c;start_row--,start_col++)
        cout<<a[start_row][start_col]<<" ";
    return 0;
}
