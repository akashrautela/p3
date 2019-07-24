#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int i,n,tmp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>tmp;
        v.push_back(tmp);
    }

    for(auto j=v.begin();j<v.end();j++)
    {
        auto tmp = min_element(j , v.end());
        if(tmp != j)  swap(*j , *tmp);
    }
    for(auto i = v.begin() ; i<v.end() ; i++) cout<<*i<<" ";
    return 0;
}
