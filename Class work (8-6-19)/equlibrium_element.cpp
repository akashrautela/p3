#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    int lsum=a[0], rsum=0;

    for(i=2;i<n;i++) rsum+=a[i];
    if(lsum == rsum)
    {
        cout<<a[1]<<" element at index "<<1;
    }
    else
    {
        int f=1;
        for(i=2;i<n-1;i++)
        {
            lsum+=a[i-1];
            rsum-=a[i];
            if(lsum == rsum)
            {
                f=0;
                cout<<a[i]<<" element at index : "<<i;
                break;
            }
        }
        if(f) cout<<"no such element";
    }
    return 0;
}
