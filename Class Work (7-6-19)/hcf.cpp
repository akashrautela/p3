#include<iostream>
using namespace std;;
int hcf(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;
    if(a==b) return a;
    if(a>b) hcf(a-b,b);
    else hcf(a,b-a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
    return 0;
}
