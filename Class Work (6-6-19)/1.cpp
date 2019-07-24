#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,7,8,9};
    int n = sizeof(a)/sizeof(int);
    n=n+1;
    int tmp=0;
    for(int i=1;i<=n;i++)
        tmp=tmp^i;
    for(int i=0;i<n-1;i++)
        tmp=tmp^a[i];
    cout<<tmp;
    return 0;
}
