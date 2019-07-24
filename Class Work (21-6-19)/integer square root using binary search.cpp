#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l =0, r=n,m;
    int res;
    while(l<r)
    {
        m = (l+r)/2;
        if(m *m == n)
        {
            res = m;
            break;
        }
        else if(m*m > n)
            r = m;
        else l= m;
    }
    cout<<res;
    return 0;
}
