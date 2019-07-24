#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int i;
    int p[n+1];
    p[0]=0;
    p[1]=1;
    p[2]=2;
    for(i=3;i<=n;i++)
        p[i] = p[i-1] + (i-1)*p[i-2];
    cout<<p[n];
    return 0;
}
