#include<iostream>
using namespace std;
int sumAP(int a, int n,int d)
{
    if(n==0) return 0;
    return a+sumAP(a+d,n-1,d);
}
int main()
{
    int ft,n,d;
    cin>>ft>>n>>d;
    cout<<sumAP(ft,n,d);
}
