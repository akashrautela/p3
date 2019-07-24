#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c = 0;
    int nob = sizeof(int)*8;
    for(int k=0;k<nob;k++)
        if(n & 1<<k) c++;
    if(c == 1) cout<<n<<" is in power of 2";
    else cout<<n<<" is not in power of 2";
    return 0;
}
