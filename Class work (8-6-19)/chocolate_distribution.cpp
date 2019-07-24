#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>m;
    sort(a,a+n);
    int tmp = a[m-1]-a[0];
    int b=0, e=m-1 ;
    for(i=1;i<n-m-1;i++)
    {
        if(tmp > a[i+m-1]-a[i])
        {
            b=i;
            e=i+m-1;
        }
    }

    for(i=b;i<=e;i++) cout<<a[i]<<" ";
    return 0;
}
