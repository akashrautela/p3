#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int maxx=-9999,minn=9999,so,go;
    for(i=0;i<n;i=i+2)
    {
        if(a[i]>a[i+1])
        {
            go=a[i];
            so=a[i+1];
        }
        else
        {
            go=a[i+1];
            so=a[i];
        }
        if(maxx<go)
            maxx=go;
        if(minn>so)
            minn=so;
    }
    cout<<maxx<<" and "<<minn;
    return 0;
}
