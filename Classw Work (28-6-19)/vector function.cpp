#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5};

    reverse(a.begin() , a.end());

    for(auto i = a.begin(); i<a.end() ; i++) cout<<*i<<" ";

    cout<<endl<<*min_element(a.begin() , a.end());
    cout<<endl<<*max_element(a.begin() , a.end());
    cout<<endl<<accumulate(a.begin() , a.end() , 0);

    return 0;
}
