#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    unordered_map<string, int>wf;
    stringstream ss(str);
    string word;
    while(ss>>word) wf[word]++;

    string maxword;
    for(auto it= wf.begin() ; it!=wf.end() ; it++)
    {
        static int maxf = it->second;
        if(maxf <= it->second)
        {
            maxf = it->second;
            maxword = it->first;
        }
    }
    cout<<maxword;
    return 0;
}
