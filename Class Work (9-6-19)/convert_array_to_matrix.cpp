#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
    int *a,i,j,m,n,**b;
    cin>>m>>n;
    a = (int *)malloc(sizeof(int)*m*n);
    b = (int **)malloc(sizeof(int *)*m);

    for(i=0;i<m;i++) b[i]=(int *)malloc(sizeof(int)*n);

    for(i=0;i<m*n;i++) cin>>a[i];


    for(int index=0;index<n*m;index++)
    {
        i=index/n;
        j=index%n;
        b[i][j]=a[index];
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++) cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
