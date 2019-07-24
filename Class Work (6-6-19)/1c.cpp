#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n-1;i++) cin>>a[i];
    sort(a,a+n);
    for(i=1;i<=n;i++)
    {
        if(a[i-1] != i)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
