#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    unordered_map<string, int>wordfreq;
    stringstream ss(str); //PICK STREAM OF WORDS
    string word;
    while(ss>>word) wordfreq[word]++;

    for(auto it=wordfreq.begin() ; it!=wordfreq.end() ; it++)
        cout<<it->first<<" --> "<<it->second<<endl;

    return 0;
}
