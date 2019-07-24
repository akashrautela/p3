#include<iostream>
#include<algorithm>
using namespace std;
int swap(int &x,int &y)
{
    int tmp =x;
    x=y;
    y=tmp;
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i=i+2)
    {
        swap(a[i],a[i+1]);
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
