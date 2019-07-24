#include<iostream>
using namespace std;
void array_reverse(int *a, int b, int e)
{
    if(b>=e) return;
    int tmp = a[b];
    a[b] = a[e];
    a[e] = tmp;
    array_reverse(a,b+1,e-1);
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    array_reverse(a,0,n-1);
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
