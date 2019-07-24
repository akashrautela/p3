#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int nob = sizeof(int)*8;
    n = n<<k | n>>(nob-k);
    cout<<n;
}
