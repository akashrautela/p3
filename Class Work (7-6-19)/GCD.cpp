#include<iostream>
using namespace std;
int gcd(int n1,int n2, int hcf)
{

    if(n1 ==0 || n2 == 0) return 0;
    if(n1 == 1 || n2 == 1) return 1;
    if(n1 == n2) return n1;
    if(n1%hcf == 0 && n2%hcf == 0) return hcf;
    gcd(n1,n2,hcf-1);
}
int main()
{
    int n1,n2,hcf=0;
    cin>>n1>>n2;
    if(n1>n2) hcf=n2;
    else hcf=n1;
    cout<<gcd(n1,n2,hcf);
    return 0;
}
