#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(a==0) return b;
    return GCD(b%a,a);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++) cin>>a[i];

    int lcm,gcd;
    gcd = GCD(a[0], a[1]);
    lcm = a[0]*a[1]/gcd;
    for(i=2;i<n;i++)
    {
        gcd = GCD(gcd, a[i]);
        lcm = lcm*a[i]/gcd;
    }
    cout<<"GCD OF NUMBERS ARE : "<<gcd<<endl<<"LCM OF NUMBERS ARE : "<<lcm;
    return 0;
}
