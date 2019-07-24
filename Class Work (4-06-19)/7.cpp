#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n],max1,max2,max3;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(a[0]>a[1] && a[0]>a[2])
    {
        max1=a[0];
        if(a[1]>a[2])
        {
            max2=a[1];
            max3=a[2];
        }
        else
        {
            max2=a[2];
            max3=a[1];
        }
    }
    else if(a[1]>a[2])
    {
        max1=a[1];
        if(a[0]>a[2])
        {
            max2=a[0];
            max3=a[2];
        }
        else{
            max2=a[2];
            max3=a[0];
        }
    }
    else
    {
        max1=a[2];
        if(a[0]>a[1])
        {
            max2=a[0];
            max3=a[1];
        }
        else
        {
            max2=a[1];
            max3=a[0];
        }
    }
    for(i=3;i<n;i++)
    {
        if(a[i]<max3) continue;
        if(a[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=a[i];
            continue;
        }
        if(a[i]>max2)
        {
            max3=max2;
            max2=a[i];
            continue;
        }
        if(a[i]>max3)
        {
            max3=a[i];
            continue;
        }
    }
    cout<<max3;
    return 0;
}
