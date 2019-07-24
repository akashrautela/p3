#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    unordered_map<int, int> hash;
    for(i=0;i<n;i++) hash[a[i]]++;

    int maxfreq = hash[a[0]];
    int maxelement = a[0];
    for(auto it=hash.begin() ; it != hash.end() ; it++)
    {
        if(maxfreq < it->second)
        {
            maxfreq = it->second;
            maxelement = it->first;
        }
    }
    cout<<maxelement<<" occurred most with "<<maxfreq<<" frequency";
    return 0;
}
