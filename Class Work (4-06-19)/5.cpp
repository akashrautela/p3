#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int max=0;
    for(i=n-1;i>=0;i--)
    {
        if(max<a[i])
        {
            max=a[i];
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
