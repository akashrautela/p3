#include<iostream>
using namespace std;
int main()
{
    int i,j,n,d;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(j=1;j<=d;j++)
    {
        int tmp=a[0];
        for(i=0;i<n-1;i++)
            a[i]=a[i+1];
        a[n-1] =tmp;
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
