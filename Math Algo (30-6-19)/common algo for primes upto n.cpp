#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j;
    cin>>n;
    long long limit = sqrt(n), limit2;
    for(i=2;i<=n;i++)
    {
        int f=1;
        limit2 = sqrt(i);
        for(j=2;j<=limit2;j++)
        {
            if(i%j == 0)
            {
                f=0;
                break;
            }
        }
        if(f) cout<<i<<" ";
    }
    return 0;
}
