#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    int tmp=(n*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        tmp-=a[i];
    }
    cout<<tmp;
    return 0;
}
