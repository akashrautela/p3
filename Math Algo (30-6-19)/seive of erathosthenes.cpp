#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, p, i;
    cin>>n; // try taking n = 10e6
    bool prime[n+1];
    for(i=0;i<=n;i++)
        prime[i]=true;

    for(p=2;p*p<=n;p++)
    {
        if(prime[p])
        {
            for(i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }
    for(p=2;p<=n;p++)
        if(prime[p]) cout<<p<<" ";
    return 0;
}
