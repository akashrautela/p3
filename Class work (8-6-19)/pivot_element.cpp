#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    int f;

    for(i=0;i<n-1;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        {
            if(a[i] < a[j])
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    f=0;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<a[i]<<" : "<<i;
            break;
        }
    }
    if(!f) cout<<"no such element";
    return 0;
}
