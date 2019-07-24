#include<iostream>
using namespace std;
bool pt(int a[], int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((k!=i) && (i!=j) && (j!=k))
                    if(a[i]*a[i] + a[j]*a[j] == a[k]*a[k]) return true;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++) cin>>a[i];
    cout<<pt(a,n);
    return 0;
}
