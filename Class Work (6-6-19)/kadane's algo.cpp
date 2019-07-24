#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    int globalmax=-9999,localmax=0;
    for(i=0;i<n;i++)
    {
        localmax+=a[i];
        if(globalmax<localmax) globalmax = localmax;
        if(localmax<0) localmax=0;
    }
    cout<<globalmax;
    return 0;
}
