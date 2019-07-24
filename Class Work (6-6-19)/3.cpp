#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,m;
    cin>>n>>m;
    int a[n],b[m],c[n+m];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<m;i++) cin>>b[i];

    i=0;
    j=0;
    k=0;

    while(i<n && j<m)
    {
        if(a[i]<b[j])
            c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    while(i<n)
        c[k++]=a[i++];
    while(j<m) c[k++]=b[j++];

    for(i=0;i<m+n;i++)
        cout<<c[i]<<" ";
    return 0;
}
