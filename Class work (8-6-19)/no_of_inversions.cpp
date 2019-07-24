#include<iostream>
using namespace std;
int count_inversions(int a[], int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j]) count++;
    }
    return count;
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cout<<count_inversions(a,n);
    return 0;
}
