//ANSWER IS REQUIRED IN MOD 10000000007


#include<bits/stdc++.h>
using namespace std;
long GCD(long long a, long long b)
{
    if(a == 0) return b;
    return GCD(b%a, a);
}
int main()
{
    long long a, i, tmp=0, mod = 10e7;
    string b;
    cin>>a>>b;
    int len = b.length();
    for(i=0;i<len;i++)
        tmp = (tmp*10 + b[i]-'0')%mod;
    cout<<GCD(a,tmp);
    return 0;
}
