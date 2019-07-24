#include<iostream>
using namespace std;
void checkPair(int a[], int x, int c, int n, int no)
{
    if(c == n) return;
    if(a[c] + no == x)
    {
        cout<<"("<<a[c]<<" , "<<no<<")"<<endl;
        return;
    }
    checkPair(a,x,c+1,n,no);
}
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    for(int i=0;i<n;i++)
        checkPair(a,x,0,n,a[i]);
    return 0;
}
