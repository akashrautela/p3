#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    int a[n] , k;
    for(i=0;i<n;i++) cin>>a[i];
    cin>>k;
    unordered_map<int, int> hash;
    for(i=0;i<n;i++)
        hash[a[i]]++; //FREQUENCY OF EACH ELEMENT
    bool flag = false;
    for(auto it = hash.begin() ; it!=hash.end(); it++)
    {
        if(it->second == k)
        {
            flag = true;
            cout<<it->first<<" ";
        }
    }
    if(!flag) cout<<"No element with "<<k<<" occurence is found!!";
    return 0;
}
