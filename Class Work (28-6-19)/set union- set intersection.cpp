#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a1 = {5, 7, 8, 3, -10};
    vector<int> a2 ={3, 10, 4};
    vector<int> v(a1.size()+a2.size());
    set_union(a1.begin(), a1.end() , a2.begin(), a2.end(), v.begin());
    for(int &i:v) cout<<i<<" ";
    auto it = set_intersection(a1.begin(), a1.end(), a2.begin(), a2.end(), v.begin());
    cout<<endl;
    v.resize(it - v.begin());
    for(int &j:v) cout<<j<<" ";
    return 0;
}
