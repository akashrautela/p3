#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
    int **a,m,n,i,j;
    cin>>m>>n;
    int *b;
    b = (int *)malloc(sizeof(int)*m*n);
    a = (int **)malloc(sizeof(int *) * m);

    for(i=0;i<m;i++) a[i] = (int *)malloc(sizeof(int) * n);

    for(i=0;i<m;i++)
        for(j=0;j<n;j++) cin>>a[i][j];

    int index=0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[index]=a[i][j];
            index++;
        }
    }
    for(i=0;i<m*n;i++) cout<<b[i]<<" ";
    return 0;
}
