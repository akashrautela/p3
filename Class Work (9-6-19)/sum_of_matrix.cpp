#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
    int m,n,**mat,i,j;
    cin>>m>>n;
    mat = (int **)malloc(sizeof(int *) * m);
    for(i=0;i<n;i++) mat[i] = (int *)malloc(sizeof(int)*n);
    int sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
            sum += mat[i][j];
        }
    }
    cout<<sum;
    return 0;
}
