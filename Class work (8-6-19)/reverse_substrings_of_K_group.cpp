#include<iostream>
using namespace std;
void array_reverse(int a[], int b, int e)
{
    if(b>=e) return;
    int tmp = a[b];
    a[b] = a[e];
    a[e] = tmp;
    array_reverse(a,b+1,e-1);
}
int main()
{
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>k;
    i=1;
    while(i<=k)
    {
        if(i*k-1 >=n)
        {
            array_reverse(a , i*k-1 - k+1, n-1);
            break;
        }
        array_reverse(a,i*k-1 - k+1 , i*k-1);
        i++;
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
