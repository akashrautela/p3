#include<bits/stdc++.h>
using namespace std;

int mergewithcount(int a[], int l, int m, int r)
{
    int co = 0;
    int n1 = m-l+1;
    int n2 = r - m;
    int L[n1] , R[n2];
    int i,j,k;

    for(i=0;i<n1;i++)  L[i] = a[i+l];
    for(j=0;j<n2;j++)  R[j] = a[m+1+j];

    i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            a[k] = L[i];
            k++; i++;
        }
        else if(L[i]>=R[k])
        {
            co++;
            a[k] = R[j];
            k++; j++;
        }
    }
    while(i<n1)
    {
        a[k] = L[i];
        k++; i++;

    }
    while(j<n2)
    {
        a[k] = R[j];
        k++; j++;
    }
    return co;

}

int msortwithcount(int a[] ,int l, int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        int na = msortwithcount(a , l, m);
        int nb = msortwithcount(a , m+1 , r);
        int nc = mergewithcount(a, l, m, r);
        return na + nb + nc;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    //int a[] = {5,4,3,10,1};
    //int n=sizeof(a)/sizeof(int);
    int c = msortwithcount(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl<<c/2;
    return 0;
}
