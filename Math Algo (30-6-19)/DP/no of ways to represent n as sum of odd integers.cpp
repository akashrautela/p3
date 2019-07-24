#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ways[n+1];

    //BASE CONDITIONS
    ways[0]=0;
    ways[1]=1;

    for(int i=2;i<=n;i++)
        ways[i] = ways[i-1] + ways[i-2];
    cout<<ways[n];
    return 0;
}
