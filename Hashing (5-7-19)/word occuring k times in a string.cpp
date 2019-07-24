#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int k; cin>>k;

    unordered_map<string, int>wordfreq;
    stringstream ss(str);   //PICK STREAM OF WORDS
    string word;

    while(ss>>word) wordfreq[word]++;

    for(auto it=wordfreq.begin() ; it!=wordfreq.end() ; it++)
        if(it->second == k)
            cout<<it->first<<" ";

    return 0;
}
